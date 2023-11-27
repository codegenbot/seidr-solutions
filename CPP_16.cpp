int count_distinct_characters(string str) {
    sort(str.begin(), str.end());
    int distinctCount = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != str[i + 1]) {
            distinctCount++;
        }
    }
    
    return distinctCount;
}