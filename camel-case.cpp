std::string camelCase(std::string& str) {
    for (auto it = str.begin(); it != str.end(); ++it) {
        if (*it == ' ' || *it == '-') {
            ++it;
            if (it != str.end()) {
                *it = toupper(*it);
            }
        } else {
            *it = tolower(*it); // Convert first character of each word
        }
    }
    return str;
}