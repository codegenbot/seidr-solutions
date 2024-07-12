#include <iostream>
#include <string>

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i < s.length() - 2; i++) {
        std::string sub = s.substr(i, 3);
        bool unique = true;
        for (size_t j = 0; j < sub.size(); j++) { 
            size_t count = 0;
            for (size_t k = 0; k < sub.size(); k++) {
                if (sub[k] == sub[j])
                    ++count;
            }
            if (count > 1) {
                unique = false;
                break;
            }
        }
        if (!unique)
            return false;
    }
    return true;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;
    if (input == "exit")
        return 0;
    std::cout << (is_happy(input) ? "True" : "False") << std::endl;
    return 0;
}