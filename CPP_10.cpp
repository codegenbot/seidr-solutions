#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string s){
    int i = 0;
    int j = s.size() - 1;
    while (i < j){
        if (s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

string make_palindrome(string str){
    string palindrome = str;
    for(int i = str.size() - 1; i >= 0; i--){
        if(is_palindrome(str.substr(i))){
            palindrome += string(str.rbegin(), str.rbegin() + str.size() - i);
            break;
        }
    }
    return palindrome;
}

int main(){
    assert(make_palindrome("jerry") == "jerryrrej");
    return 0;
}