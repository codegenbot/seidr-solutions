```cpp
bool issame(vector<string> a,vector<string> b){
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
    
    vector<string> names;
    for(int i = 0; i < n; ++i){
        string name;
        cin >> name;
        names.push_back(name);
    }
    
    string prefix;
    cin >> prefix;
    
    if(issame(names,filter_by_prefix(names,prefix))){
        cout << "The list of names that start with the given prefix is same as the original list." << endl;
    } else {
        vector<string> filtered_names = filter_by_prefix(names,prefix);
        for(string s : filtered_names) 
            cout << s << endl;
    }
    
    return 0;
}