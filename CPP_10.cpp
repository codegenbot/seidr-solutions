#include <string>

string make_palindrome(string str);

string make_palindrome(string str){
    string palindrome = str;
    for (int i = str.size() - 1; i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            palindrome += string(str.rbegin(), str.rbegin() + i);
            break;
        }
    }
    return palindrome;
}

int main() {
    // Your main function logic here
    return 0;
}