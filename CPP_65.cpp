#include <string>

std::string circular_shift(int x, int shift);

int main() {
    int x, shift;
    std::cin >> x >> shift;
    std::cout << circular_shift(x, shift) << std::endl;
    return 0;
}

std::string circular_shift(int x, int shift) {
    std::string num = std::to_string(x);
    int len = num.length();

    if (shift > len) {
        std::reverse(num.begin(), num.end());
        return num;
    }

    shift = shift % len;
    std::string res = num.substr(len - shift) + num.substr(0, len - shift);
    return res;
}