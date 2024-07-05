vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    auto char_count = [](const vector<string>& lst) {
        int count = 0;
        for (const auto& str : lst)
            count += str.size();
        return count;
    };
    
    int count1 = char_count(lst1);
    int count2 = char_count(lst2);
    
    if (count1 < count2 || count1 == count2)
        return lst1;
    else
        return lst2;
}