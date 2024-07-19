#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<vector<string>> filter_by_prefix(vector<string> strings, string prefix) {
    vector<vector<string>> result;
    for (string s : strings) {
        if (s.find(prefix) == 0) {
            vector<string> temp = {prefix};
            for(int i = prefix.size(); i < s.size(); i++) {
                temp.push_back(s.substr(i, 1));
            }
            result.push_back(temp);
        }
    }
    return result;
}

int main() {
    vector<string> strings = {"apple", "banana", "apricot"};
    string prefix = "ap";
    vector<vector<string>> output = filter_by_prefix(strings, prefix);
    
    for (vector<string> v : output) {
        for (string s : v) {
            cout << s << " ";
        }
        cout << endl;
    }
    
    return 0;
}