#include <vector>
#include <string>

bool issame(const std::vector<std::pair<std::string, std::string>>& a, const std::vector<std::pair<std::string, std::string>>& b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    vector<string> filteredStrings;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            filteredStrings.push_back(s);
        }
    }
    return filteredStrings;
}

int main() {
    vector<pair<string, string>> a = {{ "xxx", "xxx" }, { "xxxxAA", "xxxAAA" }};
    assert(issame(a, a));
    vector<string> strings = {"hello", "hell", "world"};
    vector<string> filteredStrings = filter_by_prefix(strings, "hel");
    for (const auto& s : filteredStrings) {
        cout << s << endl;
    }
    return 0;
}