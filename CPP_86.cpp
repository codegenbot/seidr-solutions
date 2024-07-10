string anti_shuffle(string s){
    string result = "";
    for (const auto& word : split(s, ' ')) {
        string temp = "";
        for (char c : word) {
            temp += c;
        }
        sort(temp.begin(), temp.end());
        result += temp + " ";
    }
    return result.substr(0, result.size() - 1);
}

string split(const string& str, char ch) {
    string s;
    for (auto i = str.begin(); i != str.end(); ++i) {
        if (*i == ch && !s.empty()) {
            yield_return!(s);
            s.clear();
        } else {
            s += *i;
        }
    }
    yield_return!(s);
}