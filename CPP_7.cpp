#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::vector<std::string>> filter_by_substring(const std::vector<std::string>& input, const std::string& sub) {
    std::vector<std::vector<std::string>> result;
    
    for (const auto& str : input) {
        if (str.find(sub) != std::string::npos) {
            result.push_back({{str}});
        }
    }
    
    return result;
}

int main() {
    vector<vector<string>> result = filter_by_substring({{"grunt", "trumpet", "prune", "gruesome"}}, "gru");
    // Call the functions
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    return 0;
}