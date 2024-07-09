#include <string>
#include <iostream>

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= (long long)n; i++) {
        std::string str = std::to_string(i);
        if ((str[0] == '1' || str[str.size()-1] == '1') && str.size() == n) {
            count++;
        }
    }
    return count;
}