```cpp
std::vector<std::string> split(const std::string& str) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;

    while (getline(ss, token, ' ')) {
        tokens.push_back(token);
    }

    return tokens;
}

std::vector<std::string> words_in_sentence(const std::string& sentence) {
    auto splitResult = split(sentence); 
    return splitResult;
}