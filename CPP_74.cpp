int total_char_count(vector<string> lst) {
    int count = 0;
    for (string str : lst) {
        count += str.size();
    }
    return count;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int count1 = total_char_count(lst1);
    int count2 = total_char_count(lst2);
    return count1 < count2 ? lst1 : (count1 > count2 ? lst2 : lst1);
}