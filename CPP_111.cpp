#include <map>
#include <string>

std::map<char, int> createHistogram(const std::string& s) {
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

bool sameHistograms(const std::map<char, int>& a, const std::map<char, int>& b) {
    if(a.size()!=b.size())
        return false;

    for(auto& pair:a){
        auto iter = b.find(pair.first);
        if(iter==b.end() || iter->second!=pair.second)
            return false;
    }
    return true;
}

int main() {
    assert(sameHistograms(createHistogram("a"), {{'a', 1}}));
    return 0;
}