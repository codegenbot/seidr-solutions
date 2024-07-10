```cpp
int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    string temp = str;
    while ((pos = temp.find(substring)) != string::npos) {
        ++count;
        temp.erase(pos, substring.length());
    }
    return count;