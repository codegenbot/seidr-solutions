for (auto& pair : dict) {  
    auto& key = pair.first;
    auto& value = pair.second;

    bool allLowerKey = isalpha(key[0]) && std::all_of(key.begin(), key.end(), ::islower);
    bool allUpperKey = isalpha(key[0]) && std::all_of(key.begin(), key.end(), ::isupper);

    bool allLowerValue = isalpha(value[0]) && std::all_of(value.begin(), value.end(), ::islower);
    bool allUpperValue = isalpha(value[0]) && std::all_of(value.begin(), value.end(), ::isupper);

    if ((allLowerKey && !allUpperValue) || (allUpperKey && !allLowerValue)) {
        return true;
    }
}