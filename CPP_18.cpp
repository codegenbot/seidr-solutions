int count = 0;
    if (substring.empty()) {
        return 0;
    }
    for (size_t i = 0; i <= str.size() - substring.size(); i++) {
        if (str.substr(i, substring.size()) == substring) {
            count++;
        }
    }
    return count;
}