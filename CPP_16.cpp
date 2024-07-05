int count_distinct_characters(string str){ 
    vector<bool> is_present(256, false);
    for (char& c : str) {
        is_present[tolower(c)] = true;
    }
    int count = 0;
    for (bool present : is_present) {
        if (present) {
            count++;
        }
    }
    return count;
}