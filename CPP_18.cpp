```c++
int how_many_times(string str, string substring) {
    int count = 0;
    for (size_t pos = 0; (pos = str.find(substring)) != string::npos;) {
        ++count;
        str.erase(pos, substring.length());
    }
    return count;
}