int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    #include <string>
    while ((pos = str.find(substring)) != std::string::npos) {
        ++count;
        str.erase(pos, substring.length());
    }
    return count;
}