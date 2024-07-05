#include<iostream>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s == str;
}

string make_palindrome(string str){
    int n = str.size();
    if(is_palindrome(str)) return str;
    for(int i=n-1; i >= 0; --i){
        if(is_palindrome(str.substr(i))){
            string prefix = str.substr(0, i);
            string rev_prefix(prefix.rbegin(), prefix.rend());
            return str + rev_prefix;
        }
    }
    return "";
}

int main(){
    string input;
    cin >> input;
    cout << make_palindrome(input);
    return 0;
}