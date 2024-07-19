```cpp
#include <iostream>
#include <string>

int count_upper(const std::string& input) {
    int count = 0;
    for (int i = 0; i < input.length(); i++) {
        if ((i % 2 == 0 && ((input[i] >= 'A' && input[i] <= 'U') || (input[i] >= 'a' && input[i] <= 'u')))) {
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);
    int result = count_upper(input);
    std::cout << "Number of uppercase vowels at even positions: " << result << std::endl;
    return 0;
}