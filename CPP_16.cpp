int count_distinct_characters(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    string temp = str;
    sort(temp.begin(), temp.end());
    int distinct_count = 0;
    for (int i = 0; i < temp.length(); i++) {
        if (temp[i] != temp[i + 1]) {
            distinct_count++;
            while (i + 1 < temp.length() && temp[i] == temp[i + 1]) {
                i++;
            }
        }
    }
    return distinct_count;
}