string find_max(vector<string> words) {
    string result = *words.begin();
    int maxUniqueChars = 0;

    for (const auto& word : words) {
        int uniqueChars = 0;
        bool seen[256] = {false};

        for (char c : word) {
            if (!seen[c]) {
                uniqueChars++;
                seen[c] = true;
            }
        }

        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < result)) {
            maxUniqueChars = uniqueChars;
            result = word;
        }
    }

    return result;
}