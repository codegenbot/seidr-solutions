```cpp
vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    for (int i = 0; i < s.size(); i++) {
        if (c.find(s[i]) == string::npos) {
            // Create a temporary string from the character
            std::string temp("1", s[i]);
            result.push_back(temp);
        }
    }
    return result;
}
```