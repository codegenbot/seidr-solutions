#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    for (int i = 0; i <= input.length(); i++) {
        if (i > 0 && input[i] == '-') {
            input[i] = char(toupper(input[i]));
            for (int j = i + 1; j <= input.length() && j < input.find(' ', i); j++)
                input[j] = tolower(input[j]);
        }
    }

    std::cout << "The camel-case string is: " << input << '\n';

    return 0;
}