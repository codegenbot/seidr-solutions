vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int count1 = 0, count2 = 0;
    for (const string& str : lst1) {
        count1 += str.size();
    }
    for (const string& str : lst2) {
        count2 += str.size();
    }
    if (count1 < count2) {
        return lst1;
    }
    return lst2;
}