#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string text) {
    int len = text.length();
    if (len < 2) {
        return true;
    }
    for (int i = 0; i < len / 2; i++) {
        if (text[i] != text[len - 1 - i]) {
            return false;
        }
    }
    return true;
}