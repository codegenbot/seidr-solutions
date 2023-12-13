```cpp
int int_to_mini_roman(int num) {
    std::string str = std::to_string(num);
    return int_to_mini_roman(str);
}

std::string int_to_mini_roman(const std::string& str) {
    // Your code here
    return "";
}
```