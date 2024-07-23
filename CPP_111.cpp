bool issame(std::map<char, int> a, std::map<char, int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (const auto& pair : a) {
        if (b.find(pair.first) == b.end() || b.at(pair.first) != pair.second) {
            return false;
        }
    }
    return true;

}

std::map<char, int> histogram(const std::string& str) {
    std::map<char, int> result;

    for (char c : str) {
        if (!isalpha(c)) continue; // ignore non-alphabetic characters
        char lower = tolower(c);
        if (result.find(lower) == result.end()) {
            result[lower] = 1;
        } else {
            result[lower]++;
        }
    }

    return result;
}