// Remove characters from s that are in c
    s.erase(remove_if(s.begin(), s.end(), [c](char ch) { return c.find(ch) != string::npos; }), s.end());
    
    // Check if the resulting string is a palindrome
    string r = s;
    reverse(r.begin(), r.end());
    bool is_palindrome = (s == r);

    return {s, is_palindrome ? "True" : "False"};
}