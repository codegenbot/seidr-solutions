vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    
    if (lst1.empty()) {
        return lst2;
    }
    
    if (lst2.empty()) {
        return lst1;
    }
    
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }
    
    if (sum1 < sum2) {
        return lst1;
    } else if (sum2 < sum1) {
        return lst2;
    } else {
        return lst1;
    }
}