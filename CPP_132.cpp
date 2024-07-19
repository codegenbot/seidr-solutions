```cpp
bool is_nested(const char* str) {
    int count = 0;
    for (char c : std::string(str)) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            if (count > 0) {
                count--;
            } else {
                return false;
            }
        }
    }
    return count > 0;
}