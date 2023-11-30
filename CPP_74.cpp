vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total_chars1 = 0;
    int total_chars2 = 0;

    for (string str : lst1) {
        total_chars1 += str.length();
    }

    for (string str : lst2) {
        total_chars2 += str.length();
    }

    if (total_chars1 < total_chars2) {
        return lst1;
    } else if (total_chars1 > total_chars2) {
        return lst2;
    } else {
        return lst1;
    }
}