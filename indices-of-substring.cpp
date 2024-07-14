std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0; 
    while (pos != std::string::npos) {
        pos = text.find(target, pos); 
        if (pos != std::string::npos) {
            result.push_back(pos);
            pos += target.size(); 
        } else break;
    }
    return result;