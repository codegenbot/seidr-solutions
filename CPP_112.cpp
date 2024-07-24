Here is the solution:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.size(); i++) {
        bool flag = false;
        for (int j = 0; j < c.size(); j++) {
            if (s[i] == c[j]) {
                flag = true;
                break;
            }
        }
        if (!flag) temp += s[i];
    }
    string rev_str = "";
    for (int i = temp.size() - 1; i >= 0; i--) {
        rev_str += temp[i];
    }
    result.push_back(temp);
    result.push_back((temp == rev_str ? "True" : "False"));
    return result;
}