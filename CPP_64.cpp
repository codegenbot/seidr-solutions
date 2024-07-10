#include <string>
#include <iostream>

int main() {
    std::string s;
    std::getline(std::cin, s);
    int result = vowels_count(s);
    return 0;
}

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && s.find('y') == s.size() - 1)) {
            count++;
        }
    }
    return count;
}