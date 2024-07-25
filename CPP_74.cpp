int countTotalChars(const vector<string>& lst) {
    int count = 0;
    for (const string& str : lst) {
        count += str.size();
    }
    return count;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    if (countTotalChars(lst1) < countTotalChars(lst2)) {
        return lst1;
    } else {
        return countTotalChars(lst1) == countTotalChars(lst2) ? lst1 : lst2;
    }
}