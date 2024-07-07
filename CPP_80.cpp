#include <string>
using namespace std;

bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i += 3) {
        string temp = s.substr(i, 3);
        bool flag = true;
        for (char c : temp) {
            int count = 0;
            for (int j = i; j < i + 3; j++) {
                if (s[j] == c)
                    count++;
            }
            if (count > 1) {
                flag = false;
                break;
            }
        }
        if (!flag)
            return false;
    }
    return true;
}