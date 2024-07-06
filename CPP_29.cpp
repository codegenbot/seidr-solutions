```
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

int main() {
    int n1, n2;
    vector<string> strings1, strings2;
    cin >> n1 >> n2;
    for(int i = 0; i < n1; ++i) {
        string s; 
        cin >> s;
        strings1.push_back(s);
    }
    for(int i = 0; i < n2; ++i) {
        string s; 
        cin >> s;
        strings2.push_back(s);
    }

    if(!issame(strings1, strings2)) cout << "NO\n";
    else{
        vector<string> filtered_strings = filter_by_prefix(strings1, "abc");
        for(string s : filtered_strings){
            cout << s << endl;
        }
    }
    
    return 0;
}