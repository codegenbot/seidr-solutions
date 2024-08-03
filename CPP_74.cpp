int countTotalChars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total1 = countTotalChars(lst1);
    int total2 = countTotalChars(lst2);

    if (total1 < total2) {
        return lst1;
    } else {
        return (total1 == total2) ? lst1 : lst2;
    }
}