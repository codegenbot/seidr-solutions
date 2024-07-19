```cpp
int findFirstWord(const std::string& str, const std::string& word) {
    size_t pos = 0;
    while ((pos = str.find(word, pos)) != std::string::npos) {
        return 1;
    }
    return -1;
}