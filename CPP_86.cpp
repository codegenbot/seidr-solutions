string anti_shuffle(string s) {
    string result = "";
    for (const auto &word : split(s, " ")) {
        result += string(word.begin(), word.end());
    }
    return result;
}

vector<string> split(const string &s, const string &delimiter) {
    vector<string> result;
    size_t pos = 0, prev = 0;
    while ((pos = s.find(delimiter, prev)) != string::npos) {
        result.push_back(s.substr(prev, pos - prev));
        prev = pos + delimiter.size();
    }
    result.push_back(s.substr(prev));
    return result;
}