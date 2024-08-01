Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        bool found = false;
        for (int j = 0; j < c.length(); j++) {
            if (s[i] == c[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += s[i];
        }
    }
    string reverse_str = temp;
    reverse(str.begin(), str.end());
    result.push_back(temp);
    if (temp == reverse_str) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}