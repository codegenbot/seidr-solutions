```cpp
#include <iostream>
#include <string>

int words_in_sentence(const std::string& sentence) {
    size_t start = 0;
    size_t end = sentence.find(' ');
    if (end == std::string::npos) return 1; // single word
    while (start < end) {
        start = end + 1;
        end = sentence.find(' ', start);
        if (end == std::string::npos) break;
    }
    return end != std::string::npos ? static_cast<int>(end - start + 1) : 0;
}

int main() {
    std::cout << words_in_sentence("here is") << std::endl;
    return 0;
}