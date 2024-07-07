#include <string>
#include <cctype>

std::string flip_case(const std::string& str) {
    std::string result = str;
    for (char c : result) {
        if (std::islower(c)) {
            c = std::toupper(c);
        } else {
            c = std::tolower(c);
        }
    }
    return result;
}

int main() {
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    return 0;
}