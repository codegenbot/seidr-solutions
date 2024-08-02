#include <string>
using namespace std;

bool is_palindrome(const string& text) {
    size_t left = 0;
    size_t right = text.length() - 1;
    while (left < right) {
        if (text[left] != text[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}