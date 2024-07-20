#include <string>

bool is_nested(std::string); // Function declaration before its definition

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    if (is_nested(str)) {
        std::cout << "The input string is nested.\n";
    } else {
        std::cout << "The input string is not nested.\n";
    }

    return 0;
}

bool is_nested(std::string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            if (count > 0) {
                count--;
            } else {
                return false;
            }
        }
    }
    return count > 0;
}