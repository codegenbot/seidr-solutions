vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if(totalChars(lst1) == totalChars(lst2)) {
        return lst1;
    } else if(totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}