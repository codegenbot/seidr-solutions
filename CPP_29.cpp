bool issame(vector<string> a, vector<string> b){
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

bool main(vector<string> input) {
    vector<string> strings = input;
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    vector<string> filteredStrings = filter_by_prefix(strings, "");
    if(issame(input, filteredStrings)) {
        cout << "The list of strings is not changed." << endl;
    } else {
        cout << "Filtered Strings: ";
        for(string s : filteredStrings) {
            cout << s << " ";
        }
        cout << endl;
    }
    return true;
}