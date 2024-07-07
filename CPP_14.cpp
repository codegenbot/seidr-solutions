```cpp
#include <initializer_list>
#include <vector>
#include <string>

using namespace std;

vector<string> all_prefixes(const string& str) {
    vector<string> result({""});
    for (int i = 1; i <= str.length(); i++) {
        for (const auto& prefix : {str.substr(0, i)}) {
            result.push_back(prefix);
        }
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (!issame(vector<string>(a[i]), vector<string>(b[i])))
            return false;
    return true;
}

vector<string> a = {"W", "WW", "WWW"};
vector<string> b = vector<string>(all_prefixes("WWW").begin(), all_prefixes("WWW").end());

assert(all_prefixes("WWW") == a, vector<string>({"W", "WW", "WWW"}));