#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    assert(issame({{"grunt", "trumpet", "prune", "gruesome"}, {"run"}}, {{"grunt", "prune"}}));
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> result = filter_by_substring(strings, substring);
    
    for(string s : result) {
        cout << s << endl;
    }
}