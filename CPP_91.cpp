```cpp
int findPattern(const std::string& str) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find("I am bored")) != std::string::npos) {
        ++count;
        pos += 7; // Move the position to the next occurrence
    }
    return count;

}