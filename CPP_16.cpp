
```
int count_distinct_characters(string str) {
    int count = 0;
    for (char c : str) {
        if (!isalpha(c)) continue;
        if (std::tolower(c) == std::toupper(c)) continue;
        count++;
    }
    return count;
}
```