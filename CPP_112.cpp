vector<string> reverse_delete(string s, string c) {
    vector<string> result;

    // Delete characters in s that are equal to any character in c
    for (int i = 0; i < c.length(); i++) {
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }

    // Check if the resulting string is palindrome
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (s == reversed) ? true : false;

    // Add the result string and "True"/"False" to the vector
    result.push_back(s);
    result.push_back((isPalindrome) ? "True" : "False");

    return result;
}