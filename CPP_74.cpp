vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    if (lst1.size() > 0 && lst2.size() > 0) {
        size_t count1 = 0, count2 = 0;
        for (const string& s : lst1) {
            count1 += s.length();
        }
        for (const string& s : lst2) {
            count2 += s.length();
        }
        if (count1 < count2) {
            result = lst2;
        } else if (count1 > count2) {
            result = lst1;
        } else {
            result = lst1;
        }
    }
    return result;
}