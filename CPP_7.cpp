vector<string> filtered_strings;
    for (const auto& s : strings) {
        if (s.find(substring) != string::npos) {
            filtered_strings.push_back(s);
        }
    }
    return filtered_strings;