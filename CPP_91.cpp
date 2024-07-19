#include <iostream>
#include <string>

int is_bored(std::string S){
    int count = 0;
    std::string boredom = "I";
    
    size_t pos = 0;
    while ((pos = S.find(boredom, pos)) != std::string::npos) {
        count++;
        pos++; // Update the position to search from
    }
    return count;

}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int result = is_bored(input);
    std::cout << "Result: " << result << std::endl;
    return 0;
}