#include <vector>
#include <string>

bool issame(const vector<vector<string>>& a) {
    if (a.size() != 1)
        return false;
    for (const auto& v : a[0]) {
        if (v.empty())
            return true;
        for (int i = 1; ; ++i) {
            string s = v.substr(0, i);
            bool found = false;
            for (const auto& other_v : a[0])
                if (other_v == s)
                    {found = true; break;}
            if (!found)
                return false;
        }
    }
    return true;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(issame({{all_prefixes("WWW")} }));
    return 0;
}