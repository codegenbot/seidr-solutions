int total_char_count(vector<string> lst) {
    int total_chars = 0;
    for (string str : lst) {
        total_chars += str.length();
    }
    return total_chars;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    if (total_char_count(lst1) < total_char_count(lst2)) {
        return lst1;
    }
    return lst2;
}