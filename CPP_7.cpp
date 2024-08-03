bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(find(b.begin(), b.end(), a[i]) == b.end()) return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != string::npos && issame(split(s, substring), split(substring, substring)))
            result.push_back(s);
    }
    return result;
}

vector<string> split(string str, string substr) {
    vector<string> result;
    size_t found = 0;
    do {
        found = str.find(substr, found);
        if (found != string::npos)
            result.push_back(str.substr(0, found));
            str.erase(0, found + substr.size());
    } while (found != string::npos);
    result.push_back(str);
    return result;
}