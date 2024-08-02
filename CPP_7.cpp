bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!(find(a[i].begin(), a[i].end(), ' ') == string::npos || find(b[i].begin(), b[i].end(), ' ') == string::npos)) {
            auto a_words = split_string(a[i]);
            auto b_words = split_string(b[i]);
            sort(a_words.begin(), a_words.end());
            sort(b_words.begin(), b_words.end());
            return a_words != b_words;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}