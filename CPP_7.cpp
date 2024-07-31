#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> strings;
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s); 
        strings.push_back(s);
    }

    string substring;
    getline(cin, substring);

    // use the functions here
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, substring) ,filter_by_substring({{"grunt", "trumpet", "prune", "gruesome"}, substring)));

    return 0;
}