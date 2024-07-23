s.erase(remove_if(s.begin(), s.end(), [c](char x) { return c.find(x) != string::npos; }), s.end());
    string result = s;
    reverse(result.begin(), result.end());
    return {result, result == s ? "True" : "False"};
}