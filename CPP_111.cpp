#include <iostream>
#include <map>
#include <cassert>

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
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

bool issame(std::map<char, int> a, std::map<char, int> b){
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    // Add more test cases here
    std::cout << "All test cases passed." << std::endl;
    return 0;
}