std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        bool found = true;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
            if (j == targetLength - 1 && text[i + j] == target[j]) {
                found = true;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }

    return indices;
}