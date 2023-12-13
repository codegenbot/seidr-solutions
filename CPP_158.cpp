```cpp
std::string find_max(const std::string& words) {
    int max = 0;
    for (size_t i = 0; i < words.length(); i++) {
        if (words[i] > max) {
            max = words[i];
        }
    }
    return std::string(max);
}
```