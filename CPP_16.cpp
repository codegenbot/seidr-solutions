Here is the completed code:

```cpp
int count_distinct_characters(string str) {
    string temp = str;
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    vector<char> v;
    for (char c : temp) {
        if (find(v.begin(), v.end(), c) == v.end())
            v.push_back(c);
    }
    return v.size();
}