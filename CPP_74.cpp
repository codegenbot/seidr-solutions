int countTotalChars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int totalChars1 = countTotalChars(lst1);
    int totalChars2 = countTotalChars(lst2);

    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return lst2;
    }
}