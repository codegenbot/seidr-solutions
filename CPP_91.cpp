```cpp
#include <iostream>
#include <string>

int is_bored(std::string S) {
    int count = 0;
    std::string boredom = "I am bored";
    size_t pos = 0;
    while ((pos = S.find(' ', pos)) != std::string::npos) {
        if (S.substr(0, pos).compare(boredom) == 0) {
            count++;
        }
        pos++;
    }
    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int result = is_bored(input);
    std::cout << "The count of 'I am bored' in your string is: " << result << std::endl;
    return 0;
}