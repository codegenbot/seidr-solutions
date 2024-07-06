#include <string>
using namespace std;

bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        string substr = s.substr(i, 3);
        int count[3] = {0};
        for (char c : substr) {
            for (int j = i; j < i + 3; j++) {
                if (s[j] == c)
                    count[c - 'a']++;
            }
            if (count[0] > 1 || count[1] > 1 || count[2] > 1)
                return false;
        }
    }
    return true;
}