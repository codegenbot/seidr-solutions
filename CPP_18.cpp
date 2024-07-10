Here is the completed code:

```cpp
int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != string::npos) {
        pos += 1; // to avoid overlapping match
        count++;
    }
    return count;
}