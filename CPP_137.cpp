#include <iostream>
#include <any>

std::any compare_one(std::string str, int i) {
    if (i > 5) {
        return std::any(str + " is greater than 5");
    } else if (i < 2) {
        return std::any(str + " is less than 2");
    } else {
        return std::any(str + " is between 2 and 5");
    }
}

int main() {
    if (true) {  
        auto result = compare_one("Test", 3);
        std::cout << "Result: " << std::any_cast<std::string>(result) << std::endl;
    }
    return 0;
}