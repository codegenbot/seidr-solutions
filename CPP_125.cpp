#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> split_words(std::string input) {
    std::vector<std::string> words;
    std::istringstream iss(input);
    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::vector<std::string> a = split_words(input);
    
    std::string input2;
    std::getline(std::cin, input2);
    std::vector<std::string> c = split_words(input2);

    if (issame(a, c)) {
        std::cout << "Same" << std::endl;
    } else {
        std::cout << "Different" << std::endl;
    }
    
    return 0;
}