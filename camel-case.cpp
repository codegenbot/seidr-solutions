std::string camelCase(const std::string& input) {
    if (input.empty()) {
        return "";
    }

    std::vector<std::string> words;
    for (const auto& token : split(input, ' ')) { 
        words.push_back(token);

        if (!result.empty())
            result += char(std::toupper(words.back()[0]));
        else
            result = std::move(words.back()).substr(1);
        for (int i = 1; i < words.back().size(); ++i)
            result += char(std::tolower(words.back()[i]));
    }
    
    return result;
}

std::vector<std::string> split(const std::string& input, char c) {
    std::vector<std::string> tokens;
    std::stringstream ss(input);
    std::string token;
    while (getline(ss, token, c)) { 
        tokens.push_back(token);
    }
    return tokens;
}