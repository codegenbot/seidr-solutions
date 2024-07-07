```cpp
#include <initializer_list>
#include <vector>
#include <string>

using namespace std;

bool issame(const vector<vector<string>>& a, const vector<vector<string>>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (!issame(a[i], b[i]))
            return false;
    return true;
}

vector<string> a = {"W", "WW", "WWW"};
vector<string> b = vector<string>(std::vector<string>(std::all_prefixes("WWW")));

vector<string> all_prefixes(const string& str) {
    vector<string> result({""});
    for (int i = 1; i <= str.length(); i++) {
        for (const auto& prefix : {str.substr(0, i)}) {
            result.push_back(prefix);
        }
    }
    return result;
}

assert(issame(vector<string>(all_prefixes("WWW")), vector<string>({"W", "WW", "WWW"})));