vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int lastSeen = -1; // Last seen position of the target

    for (int i = 0; i < text.length(); ++i) {
        if (text.substr(i-target.length(), target.length()) == target) { // Check if target exists in substring from 'lastSeen+1' to 'i'
            lastSeen = i; // Update last seen position
            result.push_back(lastSeen - (target.length() - 1)); // Add index of the found target to result list
        }
    }

    return result;
}