#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a.size() == b.size()) && all_of(a.begin(), a.end(), [&](const auto& x) { 
        return find(x, b[0]) != string::npos; });
}

int main() {
    vector<string> output = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    bool same = issame(output, {"grunt", "prune"});
    return 0;
}