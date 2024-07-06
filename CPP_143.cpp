#include <iostream>
#include <string>

int words_in_sentence(const std::string& sentence) {
    int count = 0;
    size_t pos = 0;

    while ((pos = sentence.find(' ', pos)) != std::string::npos) {
        ++count;
        ++pos; 
    }

    return count + 1; 
}

int main() {
    std::cout << words_in_sentence("here is") << std::endl;
    return 0;
}