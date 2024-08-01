#include <string>
#include <iostream>

std::string compare_one(std::string a, std::string b) {
    if (a > b) {
        return a;
    } else if (b > a) {
        return b;
    } else {
        return "None";
    }
}

int main() {
    std::cout << compare_one("hello", "world") << std::endl;
    return 0;
}