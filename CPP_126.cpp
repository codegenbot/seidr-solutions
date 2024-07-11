Here is the completed code:

bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] <= lst[i - 1]) {
            return false;
        }
    }
    int count = 1;
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] == lst[i - 1])
            count++;
        else
            count = 1;
        if (count > 1)
            return false;
    }
    return true;
}