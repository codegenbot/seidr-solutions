std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> parts = split(s, "-");
    std::string result;
    for (int i = 0; i < parts.size(); i++) {
        if (!i) {
            result += tolower(parts[i]);
        } else {
            result += toupper(parts[i].at(0));
            result += tolower(string(parts[i]).substr(1));
        }
        if (i != parts.size() - 1)
            result += " ";
    }
    return result;
}