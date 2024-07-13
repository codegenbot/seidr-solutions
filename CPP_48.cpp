#include <string>

using namespace std;

bool is_palindrome(string text) {
    string temp = text;
    for (int i = 0; i < temp.length(); i++) {
        if (temp[i] != tolower(temp[temp.length() - 1 - i]))
            return false;
    }
    return true;
}