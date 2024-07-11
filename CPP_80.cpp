#include <stdio.h>
#include <string>
using namespace std;

bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        string three_chars = s.substr(i, 3);
        bool unique = true;
        for (char c : three_chars) {
            int count = 0;
            for (int j = 0; j < three_chars.length(); j++) {
                if (c == three_chars[j])
                    count++;
            }
            if (count > 1)
                unique = false;
        }
        if (!unique)
            return false;
    }
    return true;
}