```cpp
#include <iostream>
#include <string>

bool is_bored(std::string S) {
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
    return (count > 0);
}

int main() {
    std::string S;
    std::cout << "Enter a string: ";
    std::cin >> S;

    if (is_bored(S)) {
        std::cout << "You're bored.\n";
    } else {
        std::cout << "You're not bored.\n";
    }

    return 0;
}