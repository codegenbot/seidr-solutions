```cpp
#include <string>
#include <algorithm>

int is_bored(const std::string& S){
    int count = 0;
    size_t pos = 0;
    while ((pos = input.find(" ", pos)) != std::string::npos) {
        if (input.substr(0, pos).compare("I") == 0) {
            count++;
            break;
        }
        pos = input.find(" ", pos);
    }
    return count;

}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);
    int result = is_bored(input);
    std::cout << "Count of 'I' at the beginning: " << result << std::endl;
    return 0;
}