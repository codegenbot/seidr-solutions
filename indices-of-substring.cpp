std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i + m - 1 < n; i++) { 
        int j = 0;
        while (j < m && i + j < n && text[i+j] == target[j]) {
            j++;
            if (j == m) {
                result.push_back(i);
                // Keep the same value of 'i' for next iteration
                i = i;
            }
        }
    }

    return result;
}