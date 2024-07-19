```
string issame(string s1, string s2) {
    if (s1 == s2)
        return "True";
    else
        return "False";
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(string(1, ch));
        }
    }
    string temp = "";
    for (int i = 0; i < result.size(); i++) {
        temp += result[i];
    }
    vector<string> output;
    if (temp == reverse(temp)) {
        output.push_back("True");
    } else {
        output.push_back("False");
    }
    return output;
}

string reverse(string s) {
    string rev = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        rev += s[i];
    }
    return rev;
}