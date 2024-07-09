```cpp
#include <iostream>
#include <string>

bool is_bored(std::string S) {
    int count = 0;
    std::string boredom = "I";
    size_t pos = 0;

    while (pos != std::string::npos) {
        pos = S.find(" ", pos);
        if (pos == std::string::npos)
            break;
        ++pos; 
        if (std::string(S.substr(0, pos)).compare(boredom) == 0 && S.size() > pos + boredom.length()) {
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