Here's the solution:

bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1)
        return true;

    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1])
            continue;
        else
            break;
    }
    return next(lst.begin(), 1, 0) != unique(lst.begin(), lst.end());
}