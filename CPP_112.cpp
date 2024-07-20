std::vector<std::string> reverse_delete(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::string combined;
    for (const auto& str : a) {
        combined += str;
    }
    for (const auto& str : b) {
        combined += str;
    }
    
    std::string result = "";
    for (char ch : combined) {
        if (result.find(ch) == std::string::npos) {
            result += ch;
        }
    }

    std::reverse(result.begin(), result.end());
    return {result, "euarT"};
}