#include <string>
#include <cctype>
#include <cassert>

std::string flip_case(std::string str) {
    for (char &c : str) {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }
    return str;
}

int main() {
    std::string input;
    std::cin >> input;
    std::string result = flip_case(input);
    std::cout << result << std::endl;
    return 0;
}