#include <string>
#include <iostream>

std::string compare_one(std::string a, std::string b) {
    if (a > b) {
        return a;
    } else if (b > "None") {
        return b;
    } else {
        return "None";
    }
}

int main() {
    std::cout << compare_one("Hello", "World") << std::endl;
    std::cout << compare_one("None", "Hello") << std::endl;
    return 0;
}