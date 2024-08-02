#include <cmath>
#include <string>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= std::pow(10, n-1); i++) {
        std::string s = std::to_string(i);
        if ((s[0] == '1' || s.back() == '1') && s.size() == n) {
            count++;
        }
    }
    return count;
}