std::vector<std::string> words_string(std::string s, std::vector<std::string> expected) {
    std::vector<std::string> result = {};
    for (int i = 0; i < s.size(); i++) {
        std::string temp = "";
        while (i < s.size() && s[i] != ' ') {
            temp += s[i];
            i++;
        }
        if (!temp.empty()) {
            if (!issame({{temp}}) || !std::count(expected.begin(), expected.end(), temp)) {
                return {};
            }
            result.push_back(temp);
        }
    }
    return result;
}