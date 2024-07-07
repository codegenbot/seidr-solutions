```cpp
vector<string> all_prefixes(const string& str) {
    vector<string> result({""});
    for (int i = 1; i <= str.length(); i++) {
        for (const auto& prefix : {str.substr(0, i)}) {
            result.push_back(prefix);
        }
    }
    return result;
}

bool issame(const string& a, const string& b) {
    return a == b;
}

vector<string> a = {"W", "WW", "WWW"};
vector<string> b = vector<string>(all_prefixes("WWW").begin(), all_prefixes("WWW").end());

assert(all_prefixes("WWW") == a, vector<string>({"W", "WW", "WWW"}));