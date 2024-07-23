int countTotalChars(const vector<string>& lst) {
    int totalChars = 0;
    for (const string& str : lst) {
        totalChars += str.size();
    }
    return totalChars;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (countTotalChars(lst1) < countTotalChars(lst2)) {
        return lst1;
    }
    return lst2;
}