vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.size(); i++) {
        if (find(c.begin(), c.end(), s[i]) == c.end()) {
            temp += s[i];
        }
    }
    if (temp == reverse(temp)) {
        result.push_back(temp);
        result.push_back("True");
    } else {
        result.push_back(temp);
        result.push_back("False");
    }
    return result;
}

string reverse(string str) {
    string reversed = "";
    for (int i = str.size() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}