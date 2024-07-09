```cpp
#include <iostream>
#include <string>

int main() {
    int count = 0;
    std::string boredom = "I";
    std::string S;
    std::cout << "Enter a sentence: ";
    std::cin >> S;

    size_t pos = 0;
    while ((pos = S.find(" ", pos)) != std::string::npos) {
        if (S.substr(0, pos).compare(boredom) == 0) {
            count++;
            break;
        }
        pos++;
    }

    std::cout << "Count: " << count << std::endl;

    return is_bored(S);
}

int is_bored(std::string S){
    int count = 0;
    std::string boredom = "I";
    size_t pos = 0;
    while ((pos = S.find(" ", pos)) != std::string::npos) {
        if (S.substr(0, pos).compare(boredom) == 0) {
            count++;
            break;
        }
        pos++;
    }
    return count;
}