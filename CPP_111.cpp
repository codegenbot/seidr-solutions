#include <map>
#include <string>
#include <cassert>

using namespace std;

map<char, int> histogram(string s) {
    map<char, int> hist;
    for (char c : s) {
        hist[c]++;
    }
    return hist;
}

bool issame(const map<char, int>& a, const map<char, int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (b.find(it->first) == b.end() || b.at(it->first) != it->second) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}