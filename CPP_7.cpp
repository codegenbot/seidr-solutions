```cpp
vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto& s : strings) {
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

bool same(vector<vector<string>> a, vector<string> b) {
    for (auto& v : a) {
        bool found = false;
        for (auto& s : v) {
            if (find(b.begin(), b.end(), s) != b.end()) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(same(vector<vector<string>>{{"grunt"}}, vector<string>{"grunt", "prune"}));
    return 0;
}