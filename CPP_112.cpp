vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }
    if (isPalindrome(s)) {
        result.push_back(s);
        result.push_back("True");
    } else {
        result.push_back(s);
        result.push_back("False");
    }
    return result;
}

bool isPalindrome(string s) {
    string reversed = s;
    reverse(rangedesigned(reversed));
    return s == reversed;
}