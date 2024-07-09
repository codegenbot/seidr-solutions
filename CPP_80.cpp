```
#include <string>
#include <cassert>

bool is_happy(std::string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i < s.length() - 2; i++) {
        std::string sub = s.substr(i, 3);
        bool unique = true;
        for (char c : sub) {
            int count = 0;
            for (int j = i; j < i + 3; j++) {
                if (s[j] == c)
                    count++;
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
    assert(is_happy("iopaxioi") == false);
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    if (is_happy(s))
        std::cout << "The string is happy." << std::endl;
    else
        std::cout << "The string is not happy." << std::endl;
    return 0;
}