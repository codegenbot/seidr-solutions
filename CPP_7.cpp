```cpp
#include <vector>
#include <assert.h>

bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> words, std::string substring) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if (word.find(substring) != std::string::npos)
            result.push_back(word);
    }
    return result;
}

int main() {
    assert(issame(filter_by_substring(std::vector<std::string>({"grunt", "trumpet", "prune", "gruesome"}), "run"), {"grunt", "prune"}));
    return 0;
}