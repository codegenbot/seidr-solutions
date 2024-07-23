// Complete the code here
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> seen(256, false);
    int distinctCount = 0;
    for (char c : str) {
        if (!seen[c]) {
            seen[c] = true;
            distinctCount++;
        }
    }
    return distinctCount;
}