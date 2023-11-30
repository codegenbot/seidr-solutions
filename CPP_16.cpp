int count_distinct_characters(string str){
    vector<char> distinct;
    for (char ch : str) {
        char lower_ch = tolower(ch);
        if (find(distinct.begin(), distinct.end(), lower_ch) == distinct.end()) {
            distinct.push_back(lower_ch);
        }
    }
    return distinct.size();
}