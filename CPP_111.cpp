#include <map>
#include <string>

std::map<char, int> histogram(std::string s) {
    std::map<char, int> freqMap;
    for (char c : s) {
        if (freqMap.find(c) == freqMap.end()) {
            freqMap[c] = 1;
        } else {
            freqMap[c]++;
        }
    }
    return freqMap;
}

bool issameMap(std::map<char, int> a, std::map<char, int> b) {
    if (a.size() != b.size())
        return false;

    for (auto it = a.begin(); it != a.end();++it)
        if (it->second != b.at(it->first))
            return false;

    return true;
}

int main() {
    assert(issameMap(histogram("aa"), histogram("a")));
    return 0;
}