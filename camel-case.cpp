std::string camelCase(const std::string& s) {
    std::vector<std::string> groups;
    if (s.find('-') != std::string::npos)
        groups = split(s, '-');
    else
        groups = split(s, ' ');

    std::string result;
    for (int i = 0; i < groups.size(); ++i) {
        if (i > 0)
            result += char(toupper(groups[i][0]));
        else
            result += tolower(groups[i][0]);
        result += groups[i].substr(1);
    }

    return result;
}