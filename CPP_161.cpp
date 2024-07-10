```cpp
int solve(std::string& color) {
    int result = 0;
    for (char c : color) {
        if (c != '\0' && !std::isdigit(c)) {
            result++;
        }
    }
    return result;

}