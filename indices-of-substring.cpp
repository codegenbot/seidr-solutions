vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int i = 0;
    while (i <= text.size() - target.size()) {
        bool found = true;
        for (int j = 0; j < target.size(); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
            i++; // Increment only when the target string is not found
        } else {
            i++; // Move to the next character
        }
    }
    return result;
}