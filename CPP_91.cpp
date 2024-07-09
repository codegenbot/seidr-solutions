#include <iostream>
#include <string>

std::string is_bored(std::string s) {
    std::string boredom = "I";
    int count = 0;
    size_t pos = 0;
    while ((pos = s.find(" ", pos)) != std::string::npos) {
        if (s.substr(0, pos).compare(boredom) == 0 && s.size() > pos + boredom.length()) {
            count++;
        }
        pos++;
    }
    return std::to_string(count);
}

int main() {
    std::cout << "Enter a sentence: ";
    std::string S;
    std::cin >> S;

    std::cout << is_bored(S) << std::endl;

    return 0;
}