s.erase(remove_if(s.begin(), s.end(), [&c](char ch) {
        return c.find(ch) != string::npos;
    }), s.end());
    
    string result = s;
    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());

    return {result, result == reverse_s ? "True" : "False"};
}