```cpp
int findFirstWord(const std::string& str, const std::string& word) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(word, pos)) != std::string::npos) {
        ++count;
        pos = str.find(word, pos);
    }
    return count > 0 ? 1 : -1;
}