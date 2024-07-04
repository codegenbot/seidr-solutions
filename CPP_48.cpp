#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string text) {
    int n = text.length();
    for(int i = 0; i < n / 2; ++i) {
        if(text[i] != text[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << boolalpha;
    cout << is_palindrome("xywzx") << endl; // Expected: false
    cout << is_palindrome("racecar") << endl; // Expected: true
    return 0;
}