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

bool histogramCheck(std::map<char,int> a, std::map<char,int> b){
    if(a.size() != b.size())
        return false;

    for(auto it = a.begin(); it != a.end(); ++it) {
        if(b.find(it->first) == b.end() || b.at(it->first) != it->second)
            return false;
    }
    return true;
}

int main() {
    assert(histogramCheck(histogram("a"), { {'a', 1} }));
    return 0;
}