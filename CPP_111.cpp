```
#include <map>
#include <string>

std::map<char, int> characterFrequencyHistogram(const std::string& s) {
    std::map<char, int> result;
    for (char c : s) {
        if (result.find(c) == result.end()) {
            result[c] = 1;
        } else {
            result[c]++;
        }
    }
    return result;
}

bool areEqualHistograms(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

int main() {
    assert(areEqualHistograms(characterFrequencyHistogram("a"), std::map<char, int>{{'a', 1}}));
    return 0;
}