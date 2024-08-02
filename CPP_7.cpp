```cpp
vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    bool same = true;
    if(a.size() != b.size()) same = false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) same = false;
    }
    return same;
}

int main() {
    vector<string> strings;
    cout << "Enter the number of strings: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        strings.push_back(s);
    }
    string substring;
    cout << "Enter a substring: ";
    cin >> substring;
    vector<string> result = filter_by_substring(strings, substring);
    if(result.empty()) cout << "No strings contain the given substring." << endl;
    else{
        bool same = true;
        for(int i=0; i<result.size();i++){
            if(!issame(vector<string>(1,result[i]),result)) same = false;
        }
        if(same) cout << "All strings are the same." << endl;
        else cout << "Strings are not all the same." << endl;
    }
    return 0;
}