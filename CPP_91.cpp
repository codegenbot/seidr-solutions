```
#include <iostream>
#include <string>

bool is_bored(std::string S) {
    int count = 0;
    std::string boredom = "I";
    for (int i = 0; i < S.size(); i++) {
        if (i < S.size() - boredom.size() + 1 && S.substr(i, boredom.size()).compare(0, boredom.size(), boredom) == 0) {
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