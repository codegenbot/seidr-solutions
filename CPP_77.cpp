#include <iostream>
#include <cmath>
#include <cassert>

bool iscuber(int a){
    int i = 1;
    while (std::pow(i, 3) <= a) {
        if (std::pow(i, 3) == a)
            return true;
        i++;
    }
    return false;
}

int main() {
    assert(iscuber(1729) == false);
    return 0;
}