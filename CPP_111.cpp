#include <iostream>
#include <map>
#include <string>
#include <cassert>

std::map<std::string, int> histogram(std::string test) {
    std::map<std::string, int> result;
    std::string word;
    
    for (char c : test) {
        if (c != ' ') {
            word += c;
        } else {
            if (!word.empty()) {
                result[word]++;
                word = "";
            }
        }
    }
    
    if (!word.empty()) {
        result[word]++;
    }
    
    return result;
}

bool issame(std::map<std::string, int> a, std::map<std::string, int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), std::map<std::string, int>{{"a", 1}}));
    assert(issame(histogram("hello world"), std::map<std::string, int>{{"hello", 1}, {"world", 1}}));
    assert(issame(histogram("hello hello"), std::map<std::string, int>{{"hello", 2}}));
    
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}