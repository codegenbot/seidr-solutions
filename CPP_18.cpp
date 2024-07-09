```cpp
int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    string str_copy = str; 
    while ((pos = str_copy.find(substring)) != string::npos) {
        count++;
        str_copy.erase(pos, substring.length());
    }
    return count;
}