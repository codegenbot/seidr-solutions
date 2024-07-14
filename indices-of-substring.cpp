vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    if(m == 0)
        return result; 

    int *lps = new int[m];
    int j = 0; // index for target[]

    lps[0] = 0;
    int i = 0, len = 0;

    for (i = 1; i < m; ) {
        if (target[i] == target[j]) {
            j++;
            lps[i] = j;
            i++;
        }
        else if (j != 0) {
            j = lps[j-1];
        }
        else {
            lps[i] = 0;
            i++;
        }
    }

    // Initialize the first element as 0
    lps[0] = 0;

    // Traverse the text and find all occurrences of target[].
    for (i = 0; i + m <= n; ) {
        len = 0;
        j = 0;
        while (i + len < n && j < m) {
            if (text[i + len] == target[j]) {
                j++;
                len++;
            }
            else {
                i = i - (len - lps[j-1]);
                j = lps[j-1];
            }
        }

        while (j > 0) {
            result.push_back(i);
            j = lps[j-1];
            i += len; // move to the next character
        }
    }

    delete[] lps;

    return result;
}