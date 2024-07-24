Here's the completed code:

bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1)
        return true;

    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1])
            continue;
        else
            break;
    }

    return std::all_of(lst.begin(), lst.end(), [&lst](int x) { return count(lst.begin(), lst.end(), x) <= 1; });
}