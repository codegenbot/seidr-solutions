int findPattern(const char* str) {
    int count = 0;
    size_t pos = 0;
    std::string tempStr(str); 
    while ((pos = tempStr.find("I am bored")) != std::string::npos) {
        ++count;
        pos += 7; 
    }
    return count;
}