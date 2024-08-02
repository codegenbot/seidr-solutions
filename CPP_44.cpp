#include <string>

std::string change_base(int x, int base){
    std::string result = "";
    while(x > 0){
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int x;
std::cin >> x;
std::cout << change_base(x, x + 1);