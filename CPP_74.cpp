vector<string> total_match(vector<string> lst1, vector<string> lst2){
    int total1 = 0, total2 = 0;
    for(const auto& str : lst1) {
        total1 += str.size();
    }
    for(const auto& str : lst2) {
        total2 += str.size();
    }
    return total1 < total2 ? lst1 : lst2;
}