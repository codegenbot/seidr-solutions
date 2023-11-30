vector<string> filteredStrings;
    for (string s : strings) {
        if (s.find(prefix) == 0) {
            filteredStrings.push_back(s);
        }
    }
    return filteredStrings;