```cpp
#include <initializer_list>
#include <vector>
#include <string>

using namespace std;

vector<string> filter_by_substring(const vector<vector<string>>& words, const string& sub) {
    vector<string> result;
    for (const auto& vec : words) {
        for (const auto& word : vec) {
            if (word.find(sub) != string::npos) {
                result.push_back(word);
            }
        }
    }
    return result;
}

bool issame(const string& a, const string& b) {
    bool same = true;
    size_t len = min(a.size(), b.size());
    for (size_t i = 0; i < len; ++i) {
        if (tolower(a[i]) != tolower(b[i])) {
            same = false;
            break;
        }
    }
    return same;
}

bool same(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (!issame(a[i], b[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(same(filter_by_substring({{{"grunt"}}, {{"trumpet", "prune", "gruesome"}}}, "run"), {{{"grunt"}, {"prune"}}}));
    return 0;
}