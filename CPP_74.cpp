int countTotalChars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total_chars1 = countTotalChars(lst1);
    int total_chars2 = countTotalChars(lst2);

    if (total_chars1 < total_chars2) {
        return lst1;
    } else {
        return (total_chars1 == total_chars2) ? lst1 : lst2;
    }
}