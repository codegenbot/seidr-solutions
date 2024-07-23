int count_chars(const vector<string>& lst) {
    int count = 0;
    for (const string& s : lst) {
        count += s.length();
    }
    return count;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int count1 = count_chars(lst1);
    int count2 = count_chars(lst2);
    if (count1 < count2) {
        return lst1;
    } else {
        return count2 < count1 ? lst2 : lst1;
    }
}