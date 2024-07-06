#include <stdio.h>
#include <string>
using namespace std;

bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        bool unique = true;
        string sub = s.substr(i, 3);
        for (char c : sub) {
            int index = s.find(c);
            if (index != string::npos && index != i) {
                unique = false;
                break;
            }
        }
        if (!unique)
            return false;
    }
    return true;
}