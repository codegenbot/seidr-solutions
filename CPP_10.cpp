#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    //Test if given string is a palindrome 
    string s(str.rbegin(), str.rend());
    return s == str;
}

string make_palindrome(string str){
    int n = str.size();
    for (int i = n; i >= 0; --i) {
        if (is_palindrome(str.substr(0, i))) {
            string suffix = str.substr(i);
            string prefix_rev(suffix.rbegin(), suffix.rend());
            return str + prefix_rev;
        }
    }
    return str;
}

int main() {
    string input;
    cin >> input;
    printf("%s\n", make_palindrome(input).c_str());
    return 0;
}