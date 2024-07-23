s.erase(remove_if(s.begin(), s.end(), [c](char ch) { return c.find(ch) != string::npos; }), s.end());
    string temp = s;
    reverse(temp.begin(), temp.end());
    return {s, s == temp ? "True" : "False"};
}