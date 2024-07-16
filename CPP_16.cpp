int count_distinct_characters(string str){
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    sort(str.begin(), str.end());
    return unique(str.begin(), str.end()) - str.begin();
}