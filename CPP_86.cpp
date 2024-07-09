void split(string& str, char sep) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(sep)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return;
}