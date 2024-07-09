#include <string>
#include <map>
#include <cassert>

std::map<char, int> histogram(std::string s);

bool issame(std::map<char, int> a, std::map<char, int> b);

std::map<char, int> histogram(std::string s) {
    std::map<char, int> hist;
    for (char c : s) {
        hist[c]++;
    }
    return hist;
}

bool issame(std::map<char, int> a, std::map<char, int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (b.find(it->first) == b.end() || b[it->first] != it->second) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(histogram("a"), std::map<char, int>({{'a', 1}})));
    
    return 0;
}