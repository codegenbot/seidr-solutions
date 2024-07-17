Here is the solution:

string camelCase(string s) {
    string result = "";
    for (auto &x : split(s, " ")) {
        if (!result.empty()) {
            result[0] = toupper(x[0]);
        }
        result += x;
    }
    return result;
}

vector<string> split(const string &s, char c) {
    vector<string> v2;
    string::size_type i = 0;
    string::size_type j = s.find(c);
    while (j != string::npos) {
        v2.push_back(s.substr(i, j - i));
        i = j + 1;
        j = s.find(c, i);
    }
    v2.push_back(s.substr(i));
    return v2;
}