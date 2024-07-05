#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str) {
    string s(str.rbegin(), str.rend());
    return s == str;
}

string make_palindrome(string str) {
    int n = str.size();
    if (n == 0) return str;
    for (int i = n; i >= 0; --i) {
        if (is_palindrome(str.substr(0, i))) {
            string suffix = str.substr(i);
            string prefix(suffix.rbegin(), suffix.rend());
            return str + prefix;
        }
    }
    return str; // Should not reach here
}

int main() {
    string input;
    scanf("%s", &input[0]);
    printf("%s\n", make_palindrome(input).c_str());
    return 0;
}