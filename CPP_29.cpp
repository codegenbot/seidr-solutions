```
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    vector<string> a;
    cout << "Enter strings (stop when empty):" << endl;
    string s;
    while (getline(cin, s)) {
        if (s.empty()) break;
        a.push_back(s);
    }

    vector<string> b = a;
    bool same = issame(a, b);

    string prefix;
    cout << "Enter prefix:" << endl;
    cin >> prefix;
    vector<string> result = filter_by_prefix(a, prefix);

    if(!same) cout << "Strings are not the same." << endl;
    else cout << "Strings are the same." << endl;

    for(string s : result) {
        cout << s << endl;
    }
    
    return 0;
}