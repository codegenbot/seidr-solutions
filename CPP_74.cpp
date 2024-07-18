int totalChars(vector<string> lst) {
    int sum = 0;
    for (string s : lst) {
        sum += s.length();
    }
    return sum;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (totalChars(lst1) > totalChars(lst2)) {
        return lst2;
    } else {
        return lst1;
    }
}