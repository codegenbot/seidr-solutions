#include <iostream>
#include <any>

std::any compare_one(std::string str, int i) {
    if (i > 0) {
        return std::any(str + " is positive");
    } else if (i < 0) {
        return std::any(str + " is negative");
    } else {
        return std::any(str + " is zero");
    }
}

int main() {
    if (true) {  
        std::any a = compare_one("Input: ", 1);
        std::cout << std::any_cast<std::string>(a) << std::endl;
    }
    return 0;
}