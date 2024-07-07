#include <cassert>
#include <string>
#include <cctype>
#include <iostream>

std::string flip_case(const std::string& str) {
    std::string result;
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            result += toupper(str[i]);
        } else if (isupper(str[i])) {
            result += tolower(str[i]);
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    try {
        std::cout << flip_case("These violent delights have violent ends") << std::endl;
    } catch (...) {
        std::cerr << "An error occurred." << std::endl;
    }
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLent DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}