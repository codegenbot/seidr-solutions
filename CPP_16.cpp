vector<char> distinct;
    for (char c : str) {
        if (std::find(distinct.begin(), distinct.end(), tolower(c)) == distinct.end() &&
            std::find(distinct.begin(), distinct.end(), toupper(c)) == distinct.end()) {
            distinct.push_back(tolower(c));
        }
    }
    return distinct.size();
}