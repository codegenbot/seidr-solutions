#include <iostream>
#include <string>
#include <map>
#include <cassert>

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    std::map<char, int> counts;

    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }

    int maxCount = 0;
    for (auto it = counts.begin(); it != counts.end(); ++it) {
        if (it->second > maxCount) {
            maxCount = it->second;
        }
    }

    for (auto it = counts.begin(); it != counts.end(); ++it) {
        if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }

    return result;
}

bool issame(std::map<char,int> a, std::map<char, int> b){
    return a == b;
}

int main() {
    // Add test cases and assertions here
    assert(issame(histogram("a"), {{'a', 1}}));

    return 0;
}