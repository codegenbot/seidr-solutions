bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        bool found = false;
        for(const auto& s : a[i]) {
            if(contains(b[i], s)) {
                found = true;
                break;
            }
        }
        if(!found) return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto& s : strings) {
        if(issame(split(s, ' '), split(substring, ' ')))
            result.push_back(s);
    }
    return result;
}

vector<string> split(string str, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(str);
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

bool contains(const string& str, const string& substr) {
    size_t found = str.find(substr);
    if (found != string::npos)
        return true;
    return false;
}