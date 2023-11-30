vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string newString = "";
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            newString += s[i];
        }
    }
    result.push_back(newString);

    string reverseString = newString;
    reverse(reverseString.begin(), reverseString.end());

    if (newString == reverseString) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }

    return result;
}