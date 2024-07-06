#include <string>
#include <cctype>

int main() {
    std::string str;
    // Ask for user input
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    
    std::string result = flip_case(str);
    
    std::cout << "Flipped case of the input string: " << result << std::endl;

    return 0;
}