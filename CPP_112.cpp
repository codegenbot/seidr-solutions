s.erase(remove_if(s.begin(), s.end(), [&c](char ch) { return c.find(ch) != string::npos; }), s.end());
    string result = s;
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return { result, result == reversed ? "True" : "False" };
}