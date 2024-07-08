```cpp
int is_bored(string S) {
    int count = 0;
    size_t pos = 0;
    while(pos != S.size()) {
        if (S[pos] == '.' || S[pos] == '?' || S[pos] == '!') 
            count++;
        pos++;
    }
    return count;