
#include <map>
#include <string>
#include <cassert>

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