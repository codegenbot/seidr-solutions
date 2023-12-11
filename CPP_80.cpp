#include <iostream>
#include <string>

using namespace std;

bool is_happy(string s) {
    if (s.length() == 2 && s[0] == s[1]) {
        return true;
    }
    for (int i = 0; i < s.length() - 2; i++) {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) {
            return false;
        }
    }
    return true;
}