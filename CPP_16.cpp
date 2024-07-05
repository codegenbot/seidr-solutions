int count_distinct_characters(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower); // Convert to lowercase
    vector<bool> present(26, false); // Track presence of characters
    for (char ch : str) {
        if (isalpha(ch)) {
            present[ch - 'a'] = true;
        }
    }
    return count(present.begin(), present.end(), true);
}