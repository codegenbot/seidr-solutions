#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str)) return str; // base case: if input is already palindrome
    
    int i = 0, j = str.size() - 1; // initialize pointers for finding palindromic suffix
    while(i < j && str[i] == str[j]) {
        i++; j--;
    }
    
    string prefix = str.substr(0, i); // get the prefix of non-palindromic part
    string postfix = str.substr(j+1); // get the postfix of palindromic part
    
    return prefix + str.substr(i) + reverse(postfix);
}