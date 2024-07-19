#include <iostream>
#include <string>

size_t wordsInSentence(const std::string& str) {
    size_t count = 0;
    size_t pos = 0;
    while (pos < str.length()) { 
        if ((pos = str.find(" ", pos)) != std::string::npos) {
            ++count;
            pos++; 
        } else {
            ++count; 
            break; 
        }
    }
    return count + 1; 
}

int main() {
    std::cout << "Enter a sentence: ";
    std::string str;
    std::cin >> str;

    if(str.empty()) {
        std::cerr << "Error: Input string is empty." << std::endl;
        return 1;
    }

    size_t result = wordsInSentence(str);

    std::cout << "Number of words: " << result << std::endl;

    assert(wordsInSentence("here is") == 2); 

    return 0;
}