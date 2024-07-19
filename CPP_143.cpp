```cpp
int findFirstWord(const std::string& str, const std::string& word) {
    int count = 0;
    std::string::size_type pos = 0;
    while ((pos = str.find(word, pos)) != std::string::npos) {
        ++count;
        pos += word.length();
    }
    return count > 0 ? 1 : -1;
}