#include <cassert>
#include <cctype>
#include <string>

int flip_case(const std::string& str) {
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
    return 0;
}

int main() {
    try {
        std::cout << flip_case("These violent delights have violent ends") << std::endl;
    } catch (...) {
        std::cerr << "An error occurred." << std::endl;
    }
    assert(flip_case("These violent delights have violent ends") == "these violent delights have violent ends");
    return 0;
}