int countChars(const vector<string>& lst) {
    int total = 0;
    for (const string& s : lst) {
        total += s.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    if (countChars(lst1) < countChars(lst2)) {
        return lst1;
    }
    return lst2;
}