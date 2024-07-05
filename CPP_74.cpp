vector<string> total_match(vector<string> lst1, vector<string> lst2){
    auto countChars = [](const vector<string> &lst) {
        int count = 0;
        for(const auto& str : lst) {
            count += str.size();
        }
        return count;
    };
    
    int count1 = countChars(lst1);
    int count2 = countChars(lst2);

    return (count1 <= count2) ? lst1 : lst2;
}