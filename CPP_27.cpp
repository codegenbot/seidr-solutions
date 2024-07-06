#include <string>
#include <cctype>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::string output = flip_case(str);
    std::cout << "The flipped case of the input is: " << output << std::endl;
    return 0;
}