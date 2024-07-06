```cpp
#include <iostream>
#include <string>

int is_bored(std::string S){
    int count = 0;
    std::string boredom = "I";
    size_t pos = 0;
    while ((pos = S.find(". ")) != std::string::npos || (pos = S.find("? ")) != std::string::npos || (pos = S.find("! ")) != std::string::npos) {
        if (S.substr(0, boredom.size()) == boredom) {
            count++;
        }
        S.erase(0, pos + 1);
    }
    return count;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    int bored = is_bored(sentence);
    if(bored > 0) {
        std::cout << "The sentence is considered bored.\n";
    } else {
        std::cout << "The sentence is not considered bored.\n";
    }
    return 0;
}