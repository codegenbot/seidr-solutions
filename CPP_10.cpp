#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s == str;
}

string make_palindrome(string str){
    int n = str.size();
    for (int i = n; i >= 0; --i) {
        if (is_palindrome(str.substr(0, i))) {
            string suffix = str.substr(i);
            string suffix_rev(suffix.rbegin(), suffix.rend());
            return str + suffix_rev;
        }
    }
    return ""; // this line is never reached because the loop ensures at least an empty string ("") palindrome.
}

int main() {
    string input;
    printf("Enter a string: ");
    getline(cin, input);
    printf("Shortest palindrome: %s\n", make_palindrome(input).c_str());
    return 0;
}