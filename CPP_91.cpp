```cpp
#include <string>
#include <algorithm>

int is_bored(std::string S){
    int count = 0;
    std::string boredom = "I";
    size_t pos = 0;
    while ((pos = S.find(" ", pos)) != std::string::npos) {
        if (S.substr(0, pos).compare("I") == 0) {
            count++;
            break;
        }
        pos = S.find(" ", pos);
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