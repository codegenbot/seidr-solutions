```cpp
#include <iostream>
#include <sstream>
#include <string> // Added this line
using std::string;
using std::istringstream;
using std::getline;

string words_in_sentence(string sentence) {
    istringstream ss(sentence);
    string word;
    int count = 0;
    while (getline(ss, word, ' ')) {
        if (count == 1)
            return word;
        ++count;
    }
    return "";
}

int main() {
    assert(words_in_sentence("here is") == "is");
    string sentence;
    getline(std::cin, sentence);
    try {
        std::cout << words_in_sentence(sentence) << std::endl;
    } catch (...) {
        std::cerr << "Error: Invalid input. Please enter a valid sentence." << std::endl;
    }
    return 0;
}