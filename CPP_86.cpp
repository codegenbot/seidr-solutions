```cpp
string split(const string& str, char sep) {
    vector<string> tokens;
    string s = str; // Make a copy of the string
    size_t pos = 0;
    while ((pos = s.find(sep)) != string::npos) {
        tokens.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    tokens.push_back(s);
    return join(tokens, " ");
}