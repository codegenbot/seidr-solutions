Here is the completed code:

```cpp
int count_distinct_characters(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<char> unique_chars(str.begin(), str.end());
    sort(unique_chars.begin(), unique_chars.end());
    unique_chars.erase(unique_chars.begin() + 1, unique_chars.end());
    return unique_chars.size();
}