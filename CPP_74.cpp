vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int len1 = 0, len2 = 0;
    for (const auto& str : lst1) len1 += str.length();
    for (const auto& str : lst2) len2 += str.length();
    
    if (len1 <= len2) return lst1;
    else return lst2;
}