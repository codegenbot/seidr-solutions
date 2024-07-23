int get_total_chars(vector<string> lst) {
    int total_chars = 0;
    for (const string& str : lst) {
        total_chars += str.size();
    }
    return total_chars;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    if (get_total_chars(lst1) < get_total_chars(lst2)) {
        return lst1;
    } else {
        return (get_total_chars(lst1) == get_total_chars(lst2)) ? lst1 : lst2;
    }
}