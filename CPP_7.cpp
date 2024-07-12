```
#include <vector>
#include <string>
using namespace std;

bool issame(const vector<string>& arr) {
    if (arr.empty()) {
        return true;
    }
    for (const auto& s : arr) {
        if (!s.empty() && s[0] != 'g') {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(const vector<string>& str, const string& substring) {
    vector<string> result;
    for (const auto& s : str) {
        if (s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    bool same = issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"));
    return 0;
}