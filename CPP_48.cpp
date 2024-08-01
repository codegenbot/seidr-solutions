#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string text){
    int start = 0;
    int end = text.length() - 1;

    while (start < end) {
        if (text[start] != tolower(text[end])) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    return 0;
}