#include <string>
#include <iostream>

std::string compare_one(std::string a, std::string b) {
    if (a > b) {
        return a;
    } else if (b > "1") {
        return b;
    } else {
        return "None";
    }
}

int main() {
    std::cout << compare_one("apple", "banana") << std::endl;
    std::cout << compare_one("cat", "dog") << std::endl;
    return 0;
}