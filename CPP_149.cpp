vector<string> sorted_list_sum(vector<string> lst) {
    auto it = lst.begin();
    while (it != lst.end()) {
        if (stoi(*it) % 2 != 0) {
            it = lst.erase(it);
            if (it == lst.end())
                break;
        } else
            ++it;
    }
    sort(lst.begin(), lst.end());
    return lst;