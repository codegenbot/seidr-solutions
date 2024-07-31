int charCount(const vector<string>& lst) {
    int count = 0;
    for(const string& str: lst) {
        count += str.size();
    }
    return count;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (charCount(lst1) < charCount(lst2))
        return lst1;
    return lst2;
}