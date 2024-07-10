#include <map>
#include <string>

namespace std; // Add missing namespace keyword
std::map<char, int> histogram(std::string s) {
    map<char, int> freqMap;
    for (char c : s) {
        if (freqMap.find(c) == freqMap.end()) {
            freqMap[c] = 1;
        } else {
            freqMap[c]++;
        }
    }
    return freqMap;
}

bool issameMap(const std::map<char, int>& a, const std::map<char, int>& b) {
    if (a.size() != b.size())
        return false;

    for (auto it = a.begin(); it != a.end();++it)
        if (it->second != b.at(it->first))
            return false;

    return true;
}

int main() {
    std::string s1 = "aa";
    std::string s2 = "a";
    auto hist1 = histogram(s1);
    auto hist2 = histogram(s2);

    bool sameMap = issameMap(hist1, hist2);

    if (sameMap) {
        std::cout << "Histograms are the same.\n";
    } else {
        std::cout << "Histograms are different.\n";
    }
    
    return 0;
}