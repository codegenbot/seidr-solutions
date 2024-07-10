```cpp
int solve(const std::string& color) {
    int result = 0;
    for (char c : color.c_str()) { 
        if (!std::isdigit(c)) {
            result++;
        }
    }
    return result;
}

int testMain() {
    assert(solve("#ccc") == 3);
    return 0;
}