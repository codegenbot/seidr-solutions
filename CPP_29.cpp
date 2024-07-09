```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool same(vector<string> a, vector<string> b) {
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
}

int main() {
    vector<string> a;
    cout << "Enter the number of strings: ";
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        string s;
        cout << "Enter string " << i << ": ";
        cin >> s;
        a.push_back(s);
    }
    
    vector<string> b;
    cout << "Enter the number of strings: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        string s;
        cout << "Enter string " << i << ": ";
        cin >> s;
        b.push_back(s);
    }
    
    if(same(a, b)) {
        vector<string> result = filter_by_prefix(a, "Hello");
        for(string s : result) {
            cout << s << endl;
        }
    } else {
        cout << "The lists are not the same." << endl;
    }

    return 0;
}