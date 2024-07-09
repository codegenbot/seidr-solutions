```cpp
#include <vector>
#include <string>

bool areEqual(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> words, std::string prefix) {
    std::vector<std::string> result;
    for (std::string word : words) {
        if (word.find(prefix) == 0) {
            result.push_back(word);
        }
    }
    return result;
}