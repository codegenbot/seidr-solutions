#include<stdio.h>
#include<string>
using namespace std;
bool is_palindrome(string str){
    //Test if given string is a palindrome 
    string s(str.rbegin(),str.rend());
    return s==str;
}
string make_palindrome(string str){
    /*
    Find the shortest palindrome that begins with a supplied string. 
    Algorithm idea is simple: - Find the longest postfix of supplied string that is a palindrome. 
    - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    >>> make_palindrome("") 
    "" 
    >>> make_palindrome("cat") 
    "catac" 
    >>> make_palindrome("cata") 
    "catac" 
    */
    string s(str.rbegin(),str.rend());
    string temp=str+s;
    int n=temp.length();
    int dp[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                dp[i][j]=1;
            else
                dp[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                if(temp[i]==temp[j])
                    dp[i][j]=dp[i+1][j-1]+2;
                else
                    dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
            }
        }
    }
    int i=0,j=n-1;
    string ans="";
    while(i<=j){
        if(temp[i]==temp[j]){
            ans+=temp[i];
            i++;
            j--;
        }
        else{
            if(dp[i+1][j]>dp[i][j-1])
                i++;
            else
                j--;
        }
    }
    return ans;
}
int main(){
    string str;
    cin>>str;
    cout<<make_palindrome(str);
    return 0;
}
