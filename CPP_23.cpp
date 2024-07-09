```cpp
int myStrlen(const std::string& str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}