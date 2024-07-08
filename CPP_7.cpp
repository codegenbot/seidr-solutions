```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<vector<string>> b) {
    if (a.size() != b.size()) return false;
    for (auto s : a) {
        bool found = false;
        for (auto v : b) {
            if (std::find(v.begin(), v.end(), s) != v.end()) {
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings){
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;

}
int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{{"grunt"}, {"prune"}}));
    return 0;
}