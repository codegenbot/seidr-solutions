#include <iostream>
#include <map>
#include <cassert>

bool issame(std::map<char, int> a, std::map<char, int> b){
    return a == b;
}

std::map<char, int> histogram(std::string test){
    std::map<char, int> result;
    std::map<char, int> counts;

    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }

    int maxCount = 0;
    for (auto& pair : counts) {
        maxCount = std::max(maxCount, pair.second);
    }

    for (auto& pair : counts) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}

int main() {
    // Test your functions here
    std::map<char, int> test1 = histogram("hello world");
    std::map<char, int> test2 = histogram("cpp contest");
    
    assert(issame(test1, test2) == false);

    return 0;
}