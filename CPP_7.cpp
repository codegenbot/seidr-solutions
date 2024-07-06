```c
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        bool found = false;
        for(string s : a[i].split(' ')) {
            if(find(b[i].begin(), b[i].end(), s.begin(), s.end()) != b[i].end()) {
                found = true;
                break;
            }
        }
        if(!found) return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings) {
        if(s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") , {"grunt", "prune"}));
}