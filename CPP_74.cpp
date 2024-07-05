vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    auto char_count = [](const vector<string>& lst) {
        int count = 0;
        for (const auto& str : lst) {
            count += str.size();
        }
        return count;
    };

    if (char_count(lst1) <= char_count(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}