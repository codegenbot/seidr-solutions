vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total_chars1 = 0;
    for (const string& s : lst1) {
        total_chars1 += s.length();
    }

    int total_chars2 = 0;
    for (const string& s : lst2) {
        total_chars2 += s.length();
    }

    if (total_chars1 < total_chars2)
        return lst1;
    else if (total_chars1 > total_chars2)
        return lst2;

    return lst1;
}