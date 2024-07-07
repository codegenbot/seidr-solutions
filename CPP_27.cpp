```cpp
#include <string>
#include <cctype>

std::string flip_case(std::string str) {
    for (char &c : str) {
        c = std::toupper(c);
        if (std::islower(c)) {
            c = std::tolower(c);
        }
    }
    return str;
}

int main() {
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    return 0;
}