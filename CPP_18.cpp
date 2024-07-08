```c++
#include <iostream>
#include <string>

int how_many_times(const std::string& str, const std::string& substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != std::string::npos) {
        count++;
        pos = str.find(substring, pos + 1); 
    }
    return count;

}

int main() {
    std::string input, sub;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Enter a substring: ";
    std::getline(std::cin, sub);

    int result = how_many_times(input, sub);
    std::cout << "The substring appears " << result << " times in the input.\n";
}