```cpp
for (auto& pair : dict) {
    const std::string& key = pair.first;
    bool allLower = true;
    bool allUpper = true;
    for (char c : key) {
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = islower(c);
        if (!allUpper) allUpper = isupper(c);
    }
}