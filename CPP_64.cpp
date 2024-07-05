#include <iostream>
#include <string>
#include <algorithm>

int vowels_count(const std::string &s) {
    int count = 0;
    std::string lower_s = s;
    transform(lower_s.begin(), lower_s.end(), lower_s.begin(), ::tolower);
    for (const char &c : lower_s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || (c == 'y' && &c == &lower_s.back())) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << vowels_count(input) << std::endl;
    return 0;
}