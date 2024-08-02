#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++){
        sort(a[i].begin(), a[i].end());
        sort(b[i].begin(), b[i].end());
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    vector<string> strings;
    string prefix;
    
    cin >> prefix;
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s.find(prefix) == 0)
            strings.push_back(s);
    }
    
    vector<string> filtered_strings = filter_by_prefix(strings, prefix);
    
    if(issame(filtered_strings, strings))
        cout << "All strings start with the given prefix." << endl;
    else
        cout << "Not all strings start with the given prefix." << endl;
    
    return 0;
}