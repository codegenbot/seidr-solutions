#include <iostream>
#include <string>

int count_upper(const std::string& input);

int main() {
    std::cout << "Enter a string: ";
    char c;
    std::string input;
    while((c = std::cin.get()) != '\n') {
        input += c;
    }
    int result = count_upper(input);
    std::cout << "Number of uppercase vowels at even positions: " << result << std::endl;
    return 0;
}

int count_upper(const std::string& input) {
    int count = 0;
    for (int i = 0; i < input.length(); ++i) {
        if(i % 2 == 0 && isupper(input[i])) {
            count++;
        }
    }
    return count;
}