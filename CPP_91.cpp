```cpp
#include <iostream>
#include <string>

bool is_bored(std::string S) {
    int count = 0;
    std::string boredom = "I";
    for (int j = 0; j <= S.size() - boredom.size(); j++) {
        if (S.substr(j, boredom.size()) == boredom) {
            count++;
        }
    }

    return count;
}

int main() {
    std::cout << "Enter a sentence: ";
    std::string S;
    std::cin >> S;

    if (S.empty()) {
        std::cerr << "Error: Input cannot be empty." << std::endl;
        return 1;
    }

    int result = is_bored(S);
    std::cout << "Count: " << result << std::endl;

    return 0;
}