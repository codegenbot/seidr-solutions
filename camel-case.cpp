std::string split(const std::string& s, const std::string& delimiter) {
    size_t pos = 0;
    std::string token;

    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        s = s.substr(pos + delimiter.size());
    }

    return token;