#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    int count = vowels_count(s);
    std::cout << "Number of vowels: " << count << std::endl;
    return 0;
}

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        } else if (c == 'y' && s.back() == c) {
            count++;
        }
    }
    return count;
}