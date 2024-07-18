#include <string>
#include <cassert>

std::string circular_shift(int x, int shift);

int main() {
    assert(circular_shift(11, 101) == "11");
}

std::string circular_shift(int x, int shift){
    std::string str_x = std::to_string(x);
    int n = str_x.size();
    shift = shift % n;
    if (shift == 0) {
        return str_x;
    }
    std::string result = str_x.substr(n - shift) + str_x.substr(0, n - shift);
    return result;
}