if(strings.empty()) return "";
string result = *min_element(strings.begin(), strings.end(),
    [](const string &a, const string &b) {
        if(a.size() == b.size())
            return &a < &b;
        return a.size() < b.size();
});
return result;