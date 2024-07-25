vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total_chars1 = 0, total_chars2 = 0;
    for (const string& str : lst1) {
        total_chars1 += str.size();
    }
    for (const string& str : lst2) {
        total_chars2 += str.size();
    }
    if (total_chars1 < total_chars2 || (total_chars1 == total_chars2 && !lst1.empty())) {
        return lst1;
    } else {
        return lst2;
    }
}