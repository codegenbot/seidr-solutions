if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        std::string key = pair.first;
        if (!allLower && !allUpper) break;
        allLower &= std::islower(key[0]);
        allUpper &= std::isupper(key[0]);
    }

    return allLower || allUpper;
}