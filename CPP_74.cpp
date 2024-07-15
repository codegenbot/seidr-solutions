int countChars(vector<string> &lst) {
    int total = 0;
    for (string str : lst) {
        total += str.length();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (countChars(lst1) < countChars(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}