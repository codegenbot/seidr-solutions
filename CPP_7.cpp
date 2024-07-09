#include <algorithm>
#include <set>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return std::equal(a.begin(), a.end(), b.begin(), [](const auto& a1, const auto& b1) {
        return std::set<std::string>(std::set<std::string>(a1).begin(), std::set<std::string>(b1).begin());
    });
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    vector<string> result;
    for(auto &s : strings){
        if(s.find(substring) != string::npos){
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}