#include <map>
#include <iostream>
#include <cassert>

std::map<char,int> histogram(std::string test);

bool issame(std::map<char,int> a, std::map<char,int> b) {
    return a == b;
}

int main() {
    using namespace std;
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}

std::map<char,int> histogram(std::string test) {
    std::map<char, int> result;
    if (test.empty()) {
        return result;
    }
    std::string letter;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            letter += test[i];
        }
        else {
            if (result.find(letter[0]) != result.end()) {
                result[letter[0]]++;
            }
            else {
                result[letter[0]] = 1;
            }
            letter = "";
        }
    }
    if (result.find(letter[0]) != result.end()) {
        result[letter[0]]++;
    }
    else {
        result[letter[0]] = 1;
    }
    return result;
}