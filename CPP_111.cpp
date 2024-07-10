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

bool issame(std::map<char,int> a,std::map<char,int> b){
    return a == b;
}

int main() {
    assert(issame(histogram("a"), { {'a', 1} }));
    return 0;
}