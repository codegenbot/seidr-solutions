vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int len1 = 0, len2 = 0;

    for (const string &s : lst1) {
        len1 += s.size();
    }

    for (const string &s : lst2) {
        len2 += s.size();
    }

    if (len1 <= len2) {
        return lst1;
    } else {
        return lst2;
    }
}