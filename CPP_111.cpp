#include <map>
#include <string>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

std::map<char, int> histogram(std::string str) {
    std::map<char, int> freq;
    for (std::map<char, int>::value_type c : str) {
        freq[c]++;
    }
    return freq;
}