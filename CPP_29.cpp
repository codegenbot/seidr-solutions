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
    vector<string> strings;
    string prefix;
    cin >> prefix;
    while(true) {
        string temp;
        cin >> temp;
        if(temp != "stop") 
            strings.push_back(temp);
        else
            break;
    }
    vector<string> filtered = filter_by_prefix(strings, prefix);
    cout << "filtered strings: ";
    for(string s : filtered)
        cout << s << " ";
    cout << endl;
    
    bool same = issame(strings, filtered);
    if(same) {
        cout << "strings are the same" << endl;
    } else {
        cout << "strings are not the same" << endl;
    }
    return 0;
}