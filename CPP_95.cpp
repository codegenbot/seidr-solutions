bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (const auto& pair : dict) {
        if (dict.empty()) {
            return false; // Return false if map is empty
        }
        string key = pair.first;
        if (!allLower && !allUpper) {
            break;
        }

        if (isupper(key[0])) { // Check if the first character of the key is uppercase
            allLower = false;
        } else if (islower(key[0])) { // Check if the first character of the key is lowercase
            allUpper = false;
        }
    }

    return allLower || allUpper;
}