vector<string> result;
    for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    result.push_back(s);
    result.push_back(s == reversed_s ? "True" : "False");
    return result;
}