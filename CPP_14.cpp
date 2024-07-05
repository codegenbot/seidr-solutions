vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    for(int i = 1; i <= str.length(); i++) {
        string prefix = str.substr(0, i);
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        cout << "Error: Input vectors have different sizes." << endl;
        return false;
    } else {
        for(int i = 0; i < a.size(); i++) {
            if(a[i] != b[i]) {
                cout << "Error: Input vectors are not the same." << endl;
                return false;
            }
        }
        return true;
    }