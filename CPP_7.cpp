```cpp
#include <vector>
#include <algorithm>
#include <set>

std::set<std::string> filter_by_substring(const std::vector<std::string>& words, const std::string& substring) {
    std::set<std::string> result;
    for (const auto& word : words) {
        if (word.find(substring) != std::string::npos) {
            result.insert(word);
        }
    }
    return result;
}

bool issame(vector<string> a, string b){
    vector<string> c = a;
    return c.size() > 0 && all_of(c.begin(), c.end(), [&](const string& s) {return s.find(b) != string::npos;});
}

int main(){
    assert(issame({"grunt", "trumpet", "prune", "gruesome"}, "run") == {"grunt", "prune"});
    return 0;
}