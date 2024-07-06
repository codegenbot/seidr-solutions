```cpp
#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
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
}

int main() {
    int n;
    cin >> n;
    vector<string> strings;
    for(int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;
        strings.push_back(temp);
    }
    
    string prefix;
    cin >> prefix;

    if(issame(filter_by_prefix(strings, prefix), strings)) 
        cout << "All strings start with the given prefix.\n";
    else
        cout << "Not all strings start with the given prefix.\n";

    return 0;
}