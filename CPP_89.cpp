#include <string>

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char base = 'a';
            int shift = (int)(c - base);
            int newShift = (shift + 2 * 26) % 26;
            result += base + newShift;
        } else if (c >= 'A' && c <= 'Z') {
            char base = 'A';
            int shift = (int)(c - base);
            int newShift = (shift + 2 * 26) % 26;
            result += base + newShift;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Encrypted string: " << encrypt(input) << std::endl;
    return 0;
}