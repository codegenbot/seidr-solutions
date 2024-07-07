#include <cassert>
#include <iostream>
#include <string>
#include <sstream>

std::string flipCase(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (isupper(c)) {
            result += tolower(c);
        } else if (islower(c)) {
            result += toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    try {
        std::cout << flipCase("These violent delights have violent ends") << std::endl;
    } catch (...) {
        std::cerr << "An error occurred." << std::endl;
    }
    assert(flipCase("These violent delights have violent ends") == "these violent delights have violent ends");
    return 0;
}