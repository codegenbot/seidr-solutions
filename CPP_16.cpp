int count_distinct_characters(string str){
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    auto it = unique(str.begin(), str.end());
    str.resize(distance(str.begin(), it));
    
    return str.size();
}