int count_distinct_characters(string str) {
    // Convert all characters to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Sort the string
    sort(str.begin(), str.end());

    // Count the number of distinct characters
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        // Increment count if the current character is different from the previous character
        if (i == 0 || str[i] != str[i - 1]) {
            count++;
        }
    }

    return count;
}