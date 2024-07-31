string fix_spaces(string s) {
    return regex_replace(s, std::regex(" "), "_");
}