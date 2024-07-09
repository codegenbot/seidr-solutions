#include <iostream>
#include <cctype>
#include <string>
#include <cassert>

std::string flip_case(const std::string& s) {
    std::string result;
    for (char c : s) {
        if (isalpha(c)) {
            c = (islower(c)) ? toupper(c) : tolower(c);
        }
        result += c;
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHeSe ViOlEnT dElIgHtS hAvE vIoLeNt EnDs");
    std::cout << flip_case("Hello, world!") << std::endl;
    return 0;
}