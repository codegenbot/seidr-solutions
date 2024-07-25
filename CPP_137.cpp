```cpp
#include <iostream>
#include <any>
#include <string>

std::any compare_one(std::string str, int i) {
    if (i > 1) {
        return std::any(str);
    } else if (i < 1) {
        return std::any("None");
    } else {
        return std::any(str);
    }
}

int main() {
    if (true) {
        if (std::any_cast<std::string>(compare_one("1", 0)) == "None") {
            std::cout << "The output is None." << std::endl;
        } else {
            std::cout << "The output is not None." << std::endl;
        }
    }
    return 0;
}