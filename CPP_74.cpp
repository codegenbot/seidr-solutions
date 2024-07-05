vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    auto total_chars = [](const vector<string>& lst) {
        int count = 0;
        for (const auto& str : lst) {
            count += str.size();
        }
        return count;
    };

    if (total_chars(lst1) <= total_chars(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}