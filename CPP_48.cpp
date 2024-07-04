#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool is_palindrome(string text){
    int n = text.size();
    for(int i = 0; i < n / 2; i++) {
        if(text[i] != text[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    assert(is_palindrome("madam") == true);
    assert(is_palindrome("racecar") == true);
    assert(is_palindrome("hello") == false);
    cout << "All tests passed!" << endl;
    return 0;
}