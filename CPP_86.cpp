string split(const string& str, char sep) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(sep)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return join(tokens, " ");
}

string join(const vector<string>& vec, const string& sep) {
    string result;
    for (const auto& s : vec) {
        result += s + sep;
    }
    return result.substr(0, result.size() - 1);
}