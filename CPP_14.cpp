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

bool issame(const vector<string>& a, const initializer_list<string> b) {
    if (a.size() != distance(b.begin(), b.end()))
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != *next(b.begin(), i))
            return false;
    return true;
}

vector<string> a = {"W", "WW", "WWW"};
vector<string> b = vector<string>(all_prefixes("WWW").begin(), all_prefixes("WWW").end());

assert(all_prefixes("WWW") == a);