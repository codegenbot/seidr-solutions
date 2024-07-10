```cpp
#include <string>
#include <algorithm>

int is_bored(const std::string& S){
    int count = 0;
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
    char buffer[1024]; 
    std::cout << "Enter a string: ";
    fgets(buffer, sizeof(buffer), stdin); 
    std::string input(buffer); 
    int result = is_bored(input);
    std::cout << "Count of 'I' at the beginning: " << result << std::endl;
    return 0;
}