#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);
vector<string> filter_by_prefix(vector<string> strings, string prefix);

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto str : strings) {
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;

int main() {
    int n;
    cin >> n;

    vector<string> words(n);

    for (auto &word : words) {
        cin >> word;
    }

    string prefix;
    cin >> prefix;

    bool same = issame(words, filter_by_prefix(words, prefix));

    if(same)
        cout << "Same" << endl;
    else
        cout << "Not Same" << endl;

    return 0;
}