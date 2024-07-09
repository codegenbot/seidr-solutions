```cpp
int how_many_times(const char* str, const char* substring) {
    std::string local_str = std::string(str); // create a local copy of the string
    int count = 0;
    size_t pos = 0;

    while ((pos = local_str.find(substring)) != std::string::npos) {
        count++;
        local_str.erase(0, pos + strlen(substring));
    }
    return count;
}