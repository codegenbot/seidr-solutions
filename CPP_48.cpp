#include <string>

using namespace std;

bool is_palindrome(string text) {
    int left = 0, right = text.length() - 1;
    while (left < right) {
        if (tolower(text[left]) != tolower(text[right])) return false;
        left++;
        right--;
    }
    return true;
}