#include <vector>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

bool is_same(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const string& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    vector<string> strings;
    string prefix;
    int n;
    
    cin >> n;
    strings.resize(n);
    for(int i=0; i<n; i++){
        cin >> strings[i];
    }
    
    cin >> prefix;
    
    vector<string> filtered_strings = filter_by_prefix(strings, prefix);
    
    for(const auto& s : filtered_strings) {
        cout << s << " ";
    }
    
    return 0;
}