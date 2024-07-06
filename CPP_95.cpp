if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        const std::string& key = pair.first;
        if (!allLower && !allUpper) break; // Add a semicolon here
        if (!allLower) allLower = islower(key[0]);
        if (!allUpper) allUpper = isupper(key[0]);
    }

    return allLower || allUpper;
}