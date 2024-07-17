std::vector<std::string> split(const std::string& s, char c) {
    std::vector<std::string> groups;
    std::string group = "";
    for (char ch : s) {
        if (ch == c) {
            groups.push_back(group);
            group = "";
        } else {
            group += ch;
        }
    }
    groups.push_back(group);
    return groups;
}

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> groups = split(s, '-');
    std::string result;
    for (int i = 0; i < groups.size(); ++i) {
        if (!result.empty()) {
            result[0] = toupper(groups[i][0]);
        } else {
            result += tolower(groups[i][0]);
        }
        for (int j = 1; j < groups[i].size(); ++j) {
            result += toupper(groups[i][j]);
        }
        if (i < groups.size() - 1) {
            result += ' ';
        }
    }
    return result;
}