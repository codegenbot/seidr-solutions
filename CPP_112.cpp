vector<string> reverse_delete(string s, string c) {
    vector<string> result;

    // Delete characters in s that are equal to any character in c
    for (int i = 0; i < c.length(); i++) {
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }

    // Check if the result string is palindrome
    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());
    bool is_palindrome = (s == reverse_s);

    // Add the result string and "True"/"False" to the result vector
    result.push_back(s);
    result.push_back(is_palindrome ? "True" : "False");

    return result;
}