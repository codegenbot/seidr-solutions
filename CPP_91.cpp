```cpp
#include <iostream>
#include <string>

int originalMain() {
    int count = 0;
    std::string boredom = "I";
    std::string S;
    std::cout << "Enter a sentence: ";
    std::cin >> S;

    size_t pos = 0;
    while ((pos = S.find(" ", pos)) != std::string::npos) {
        if (S.substr(0, pos).compare(boredom) == 0 && S.size() > pos + boredom.length()) {
            count++;
        }
        pos++;
    }

    std::cout << "Count: " << count << std::endl;

    return 0;
}

int main() {
    originalMain();
    return 0;
}