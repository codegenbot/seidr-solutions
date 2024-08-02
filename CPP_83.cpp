#include <cmath>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= pow(10, n-1); i++) {
        string s = to_string(i);
        if ((s[0] == '1' || s[s.size()-1] == '1') && s.size() == n) {
            count++;
        }
    }
    return count;
}