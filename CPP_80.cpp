#include <string>
using namespace std;

bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i < s.length() - 2; i++) {
        bool unique = true;
        for (int j = i + 1; j < i + 4 && j < s.length(); j++) {
            if (s[j] == s[i])
                return false;
            for (int k = j + 1; k < j + 4 && k < s.length(); k++) {
                if (s[k] == s[j])
                    unique = false;
            }
        }
        if (!unique)
            return false;
    }
    return true;
}