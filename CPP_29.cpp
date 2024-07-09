bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<string> strings;
    string prefix;

    cin >> prefix;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        strings.push_back(str);
    }

    vector<string> result = filter_by_prefix(strings, prefix);

    if(issame(result , {"xxx", "xxxAAA", "xxx"})) 
        cout << "The output is correct" << endl;
    else
        cout << "The output is incorrect" << endl;

    return 0;
}