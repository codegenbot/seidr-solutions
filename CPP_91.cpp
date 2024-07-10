```cpp
#include <string>
#include <algorithm>

int is_bored(const char* S){
    int count = 0;
    std::string boredom = "I";
    size_t pos = 0;
    while ((pos = std::string(S).find(" ", pos)) != std::string::npos) {
        if (std::string(S).substr(0, pos).compare(boredom) == 0) {
            count++;
            break;
        }
        pos = std::string(S).find(" ", pos);
    }
    return count;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);
    int result = is_bored(input.c_str());
    std::cout << "Count of 'I' at the beginning: " << result << std::endl;
    return 0;
}