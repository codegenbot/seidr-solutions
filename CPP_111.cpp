#include <iostream>
#include <map>
#include <string>
#include <cassert>

std::map<std::string, int> histogram(std::string test);
bool issame(std::map<std::string, int> a, std::map<std::string, int> b);

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
    assert(issame(histogram("a"), histogram("a")));
    assert(issame(histogram("hello world"), histogram("hello world")));
    assert(issame(histogram("hello hello"), histogram("hello hello")));
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}