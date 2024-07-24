Here is the solution:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;

    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (find(c.begin(), c.end(), s[i]) == c.end()) {
            temp += s[i];
        }
    }

    string reverseTemp = "";
    for (int i = temp.length() - 1; i >= 0; i--) {
        reverseTemp += temp[i];
    }

    if (temp == reverseTemp) {
        result.push_back(temp);
        result.push_back("True");
    } else {
        result.push_back(temp);
        result.push_back("False");
    }

    return result;
}