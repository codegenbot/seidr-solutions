#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (std::find(b.begin(), b.end(), *it) == b.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    bool issame(vector<string> a, vector<string> b);
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}