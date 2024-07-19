#include <string>
#include <algorithm>
#include <cassert>

std::string circular_shift(int x, int shift);

int main() {
    assert(circular_shift(11, 101) == "11");
    return 0;
}

std::string circular_shift(int x, int shift){
    std::string num = std::to_string(x);
    int n = num.size();
    shift = shift % n;
    if(shift == 0) return num;
    if(shift > n) {
        std::reverse(num.begin(), num.end());
        return num;
    }
    std::rotate(num.rbegin(), num.rbegin() + shift, num.rend());
    return num;
}