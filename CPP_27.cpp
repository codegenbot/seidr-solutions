```cpp
std::string flip_case(const std::string& s) {
    std::string result = "";
    for (auto it = s.begin(); it != s.end(); ++it) {
        if (isupper(*it)) {
            result += tolower(*it);
        } else if (islower(*it)) {
            result += toupper(*it);
        } else {
            result += *it;
        }
    }
    return result;
}