vector<string> reverse_delete(string s, string c) {
    // Create a result vector
    vector<string> result;

    // Remove characters from s that are equal to any character in c
    for (int i = 0; i < c.length(); i++) {
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }

    // Check if the resulting string is a palindrome
    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());
    bool is_palindrome = s == reverse_s;

    // Add the result string and the check result to the vector
    result.push_back(s);
    result.push_back(is_palindrome ? "True" : "False");

    return result;
}