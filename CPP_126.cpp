Here's the completed code:

bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1) return true;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1]) continue;
        int count = 0;
        for (int j = i; j > 0; j--) {
            if (lst[j] == lst[j - 1]) count++;
            else break;
        }
        if (count == i) return false;
    }
    return true;