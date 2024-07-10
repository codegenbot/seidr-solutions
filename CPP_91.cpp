```cpp
#include <string>
#include <algorithm>
#include <sstream>

int is_bored(const std::string& S){
    int count = 0;
    std::istringstream iss(S);
    int pos;
    while ((pos = getline(iss, S, ' ').good())) {
        if (S.substr(0, pos).compare("I") == 0) {
            count++;
            break;
        }
        pos = getline(iss, S, ' ');
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