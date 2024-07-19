#include <iostream>
#include <string>

int start_here(std::string& input) {
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int count = count_upper(input);
    std::cout << "Number of uppercase vowels at even positions: " << count << std::endl;
    return 0;
}

int count_upper(std::string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if ((i % 2 == 0 && static_cast<char>(str[i]) >= 'A' && static_cast<char>(str[i]) <= 'U')) {
            count++;
        }
    }
    return count;
}