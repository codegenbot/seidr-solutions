#include <iostream>
#include <algorithm>
#include <cassert>

std::string circular_shift(int x, int shift) {
    std::string numStr = std::to_string(x);
    int n = numStr.size();
    shift = shift % n;
    if (shift == 0) {
        return numStr;
    }
    if (shift > n / 2) {
        std::reverse(numStr.begin(), numStr.end());
    } else {
        std::rotate(numStr.rbegin(), numStr.rbegin() + shift, numStr.rend());
    }
    return numStr;
}

int main() {
    assert(circular_shift(11, 101) == "11");
    
    return 0;
}