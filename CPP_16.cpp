```
int count_distinct_characters(string str) {
    vector<char> distinctChars;
    for (auto c : str) {
        if (find(distinctChars.begin(), distinctChars.end(), tolower(c)) == distinctChars.end()) {
            distinctChars.push_back(tolower(c));
        }
    }
    return distinctChars.size();
}
```