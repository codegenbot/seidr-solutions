```cpp
int hex_key(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(),
                   [](char c){return tolower(c);});
    int result = 0;
    for (char c : s) {
        if (isalnum(c)) {
            result++;
        }
    }
    return result;
}