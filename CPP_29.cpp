#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(find(b.begin(), b.end(), a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

int main() {
    vector<string> a = {"apple", "banana", "cherry"};
    vector<string> b; // declare before calling issame
    if(issame(a, b)) {
        vector<string> filtered = filter_by_prefix(a, "ap");
        for(string s : filtered) {
            cout << s << endl;
        }
    } else {
        cout << "vectors are not same" << endl;
    }
    return 0;
}