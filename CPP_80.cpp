```cpp
#include <iostream>
#include <string>

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    size_t j = 0;
    for (int i = 0; i <= s.length() - 3; i++) {
        if ((i + 1) % 3 == 0) j++;
        std::string sub = s.substr(i, (i < j * 3 || i >= (j + 1) * 3) ? 1 : 3);
        bool unique = true;
        for (char a : sub) { 
            size_t count = 0;
            for (char b : sub) {
                if (b == a)
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