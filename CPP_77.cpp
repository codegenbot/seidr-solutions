#include <cmath>

bool iscuber(int a) {
    int i = 1;
    while (std::pow(i,3) <= a) {
        if (std::pow(i,3) == a)
            return true;
        i++;
    }
    return false;