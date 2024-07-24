vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (find(c.begin(), c.end(), s[i]) == c.end()) {
            temp += s[i];
        }
    }
    result.push_back(temp);
    
    string reverse = temp;
    reverse.erase(0, reverse.length() - 1);
    for(int i=reverse.length()-1; i>=0; i--) {
        result.push_back(reverse.substr(i, 1));
    }
    
    if (temp == reverse) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    return result;
}