int findFirstWord(const std::string& str, const char* word) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(word, pos)) != std::string::npos) {
        ++count;
        pos += word->length();
    }
    return count > 0 ? 1 : -1;
}