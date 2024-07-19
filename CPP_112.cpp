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
    
    if (temp == reverse(temp)) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

string reverse(string s) {
    string rev = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        rev += s[i];
    }
    return rev;

string issame(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return "False";
    } else {
        for (int i = 0; i < str1.length(); i++) {
            if (str1[i] != str2[i]) {
                return "False";
            }
        }
        return "True";
    }
}