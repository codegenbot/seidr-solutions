#include <iostream>
#include <any>

std::any compare_one(std::string str, int i) {
    if (i > 5) {
        return str + " is greater than 5";
    } else if (i == 5) {
        return "Value is equal to 5";
    } else {
        return str + " is less than or equal to 5";
    }
}

int main() {
    std::any result = compare_one("Any", 3);
    try {
        std::string output = std::any_cast<std::string>(result);
        std::cout << output << std::endl;
    } catch (const std::bad_any_cast& e) {
        std::cerr << "Bad any cast: " << e.what() << std::endl;
    }
    return 0;
}