Here's the solution:

bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1)
        return true;

    bool sorted = true;
    int prev = lst[0];

    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] < prev) {
            prev = lst[i];
        } else if (lst[i] == prev) {
            if (!sorted)
                return false;
            prev = lst[i];
        } else {
            sorted = false;
            break;
        }
    }

    return sorted;
}