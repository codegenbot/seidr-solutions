int count_distinct_characters(string str){
    vector<bool> charExists(26, false);
    int count = 0;
    for (char c : str) {
        if (isalpha(c) && !charExists[toupper(c) - 'A']) {
            charExists[toupper(c) - 'A'] = true;
            count++;
        }
    }
    return count;
}