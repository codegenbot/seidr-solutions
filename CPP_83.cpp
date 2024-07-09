#include <cmath>
#include <string>

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= std::pow(10, n-1); i++) {
        std::string str = std::to_string(i);
        if (str[0] == '1' || str.back() == '1') {
            count++;
        }
    }
    return count;
}