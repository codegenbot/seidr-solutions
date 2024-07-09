```cpp
#include <map>
#include <string>

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    if (a.size() != b.size()) return false;
    for (const auto& p : a) {
        if (!b.count(p.first) || b.at(p.first) != p.second) return false;
    }
    return true;
}

int main() {
    std::map<char, int> b = { { 'a' , 1 } };
    assert(issame(histogram("a"), b));
    return 0;
}

std::map<char, int> histogram(const std::string& s) {
    std::map<char, int> hist;
    for (char c : s) {
        if (hist.count(c)) hist[c]++;
        else hist[c] = 1;
    }
    return hist; }