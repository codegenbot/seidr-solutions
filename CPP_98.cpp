Here is the modified code:

// Problem description: Count the number of uppercase vowels at even positions in a given string.

#include <iostream>
#include <string>

int count_upper(const std::string& input) {
    int count = 0;
    for (int i = 0; i < input.length(); ++i) {
        if(isupper(input[i]) && i % 2 == 0) {
            switch(input[i]) {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U': 
                    count++;
                    break;
            }
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