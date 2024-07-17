std::string kebabToCamel(const std::string& s) {
    std::string result;
    std::vector<std::string> groups = split(s, '-');
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