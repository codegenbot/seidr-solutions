bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1)
        return true;

    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] >= lst[i + 1]) 
            return false;
    }

    vector<int> seen(lst[0]);
    for (const auto& num : lst) {
        if (std::find(seen.begin(), seen.end(), num) != seen.end())
            return false;
        seen.push_back(num);
    }

    return true;
}