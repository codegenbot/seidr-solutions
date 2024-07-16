int totalChars(vector<string> lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.length();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    }
    return lst2;
}