int findPattern(std::string& input) {
    int count = 0;
    size_t pos = 0;
    while ((pos = std::string(input).find("I am bored", pos)) != std::string::npos) {
        ++count;
        pos += 9; // increment by the length of "I am bored"
    }
    return count;
}