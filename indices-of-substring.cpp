vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target)
            result.push_back(i);
    }

    // KMP code
    vector<int> lps(m, 0); // prefix suffixes

    int j = 0;

    for (int i = 1; i < m; i++) {
        if (target[i] == target[j]) {
            j++;
            lps[i] = j;
        } else if (j != 0) {
            j = lps[j - 1];
        } else {
            lps[i] = 0;
        }
    }

    j = 0;

    for (int i = 0; i < n; i++) {
        while (j && text[i] != target[j]) {
            j = lps[j - 1];
        }

        if (text[i] == target[j]) {
            j++;
        }

        if (j == m) {
            result.push_back(i - m + 1);
            j = lps[j - 1];
        }
    }

    return result;
}