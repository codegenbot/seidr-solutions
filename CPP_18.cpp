int how_many_times(std::string str, std::string substring) {
    int count = 0;
    size_t pos = 0;
    string temp = str;
    while ((pos = temp.find(substring)) != std::string::npos) {
        count++;
        temp.erase(0, pos + substring.size());
    }
    return count;