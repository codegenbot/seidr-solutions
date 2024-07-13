std::string camelCase(const std::string& input) {
    if (input.empty()) {
        return "";
    }

    std::stringstream iss(input);
    std::string word;
    std::string result;

    while (iss >> word) { 
        if (!result.empty())
            result += toupper(word[0]);
        else
            result = tolower(word);
        for (auto c : word.substr(1)) {
            result += std::tolower(c);
        }
    }
    
    return result;
}