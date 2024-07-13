```c
std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int index = 0;

    while (index < text.length()) {
        size_t found = text.find(target, index);
        if (found != std::string::npos) {
            result.push_back(found);
            index = found + 1; 
        } else {
            index++; 
        }
    }

    return result;
}