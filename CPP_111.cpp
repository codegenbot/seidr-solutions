#include <map>
#include <cassert>
#include <string>

bool issame(std::std::map<char, int> a, std::std::map<char, int> b) {
    return a == b;
}

std::map<char, int> histogram(std::string str) {
    std::map<char, int> freq;
    for (char c : str) {
        freq[c]++;
    }
    return freq;
}