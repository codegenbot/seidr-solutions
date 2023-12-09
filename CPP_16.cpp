```
int count_distinct_characters(std::string str) {
    std::vector<char> distinctChars;
    for (auto c : str) {
        if (std::find(distinctChars.begin(), distinctChars.end(), tolower(c)) == distinctChars.end()) {
            distinctChars.push_back(tolower(c));
        }
    }
    return distinctChars.size();
}
```