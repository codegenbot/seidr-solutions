vector<string> sorted_list_sum(vector<string> lst) {
    auto is_same = [](const string& a, const string& b) -> bool {
        return (a.length() % 2 && !b.length() % 2) || (!a.length() % 2 && b.length() % 2);
    };
    vector<string> result;
    for (auto i = lst.begin(); i != lst.end(); ++i) {
        auto it = unique(i, i+1, is_same);
        vector<string> temp(i, it);
        sort(temp.begin(), temp.end());
        if (!result.size() || temp[0].compare(result[0]) < 0)
            result.insert(result.end(), temp.begin(), temp.end());
    }
    return result;
}