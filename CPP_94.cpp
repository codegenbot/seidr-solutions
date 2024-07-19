#include <iostream>
#include <string>

int skjkasdkd(std::vector<int> codePoints) {
    int vowelCount = 0;
    for (auto codePoint : codePoints) {
        if (codePoint == 127 || codePoint == 97 || codePoint == 8192) {
            vowelCount++;
        }
    }
    return vowelCount;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int result = skjkasdkd({static_cast<int>(c) for c in input});
    std::cout << "Number of vowels: " << result << std::endl;

    return 0;
}