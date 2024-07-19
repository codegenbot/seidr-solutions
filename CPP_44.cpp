#include <string>

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 42;
    std::string result_str = std::to_string(x);
    return 0;
}