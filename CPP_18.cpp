int how_many_times(char* str, std::string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = std::string(str).find(substring, pos)) != std::string::npos) {
        ++count;
        pos += substring.size();
    }
    return count;

}