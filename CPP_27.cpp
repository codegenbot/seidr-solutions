#include <iostream>
#include <string>
#include <cctype>

std::string flip_case(std::string str) {
    for (char &c : str) {
        c = toupper(c);
    }
    return str;
}

int main() {
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    return 0;
}