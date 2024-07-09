#include <string>
#include <algorithm>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;

    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += tolower(c) == 'a' ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }

    return 0;
}