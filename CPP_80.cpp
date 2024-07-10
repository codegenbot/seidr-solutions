#include <stdio.h>
#include <string>
using namespace std;

bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        set<char> unique_chars(s.begin() + i, s.begin() + i + 3);
        if (unique_chars.size() != 3)
            return false;
    }
    return true;
}