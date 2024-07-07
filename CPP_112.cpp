vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (find(c.begin(), c.end(), s[i]) == c.end()) {
            temp += s[i];
        }
    }
    if (isPalindrome(temp)) {
        result.push_back(temp);
        result.push_back("True");
    } else {
        result.push_back(temp);
        result.push_back("False");
    }
    return result;
}

bool isPalindrome(string s) {
    int start = 0, end = s.length() - 1;
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}