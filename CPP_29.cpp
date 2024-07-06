```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b, bool) {
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

int main() {
    int n;
    cin >> n;
    vector<string> words(n);
    for(int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    string prefix;
    cin >> prefix;

    bool same = issame(words, filter_by_prefix(words, prefix), true);

    if(same)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}