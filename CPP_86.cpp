string split(const string& str, char sep) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(sep)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        string strTmp = str.substr(pos + 1);
        str = strTmp;
    }
    tokens.push_back(str);
    return join(tokens, " ");
}