#include <string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    string rev = str;
    reverse(rev.begin(), rev.end());
    int i=0, j=str.length()-1;
    while(i<=j && str[i]==rev[j]){
        i++;
        j--;
    }
    if(i>j)
        return str+rev;
    else
        return rev.substr(j+1)+str+rev.substr(0,j-i+1);
}