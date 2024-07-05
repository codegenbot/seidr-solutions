vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    auto char_count = [](const vector<string>& lst) {
        int total = 0;
        for (const string& str : lst) {
            total += str.size();
        }
        return total;
    };
    
    if (char_count(lst1) <= char_count(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}