vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total_chars_1 = 0, total_chars_2 = 0;
    for (const string& str : lst1) {
        total_chars_1 += str.length();
    }
    for (const string& str : lst2) {
        total_chars_2 += str.length();
    }
    if (total_chars_1 < total_chars_2 || (total_chars_1 == total_chars_2 && lst1.size() >= lst2.size())) {
        return lst1;
    } else {
        return lst2;
    }
}