#include <iostream>
#include <string>

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            count++;
        }
    }
    return count;

}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    int count = vowels_count(input);
    std::cout << "Vowels count: " << count << std::endl;
    return 0;
}