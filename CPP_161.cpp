```cpp
int solve(std::string s) {
    for (char &c : s) {
        if (std::isupper(c)) { 
            c = std::tolower(c);
        }
    }
    return s.length();
}