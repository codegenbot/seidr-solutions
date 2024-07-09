```cpp
int how_many_times(const string& str, const string& substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != string::npos) {
        count++;
        str.erase(pos, substring.length());
    }
    return count;
}