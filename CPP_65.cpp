#include <string>

std::string circular_shift(int x, int shift);

std::string circular_shift(int x, int shift) {
    std::string str = std::to_string(x);
    int n = str.size();
    shift = shift % n;
    if (shift == 0) {
        return str;
    } else {
        std::string shifted = str.substr(n - shift) + str.substr(0, n - shift);
        return shifted;
    }
}