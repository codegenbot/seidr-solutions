int getTotalChars(vector<string> lst) {
    int total = 0;
    for (string s : lst) {
        total += s.length();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    if (getTotalChars(lst1) < getTotalChars(lst2)) {
        return lst1;
    } else {
        return getTotalChars(lst1) == getTotalChars(lst2) ? lst1 : lst2;
    }
}