Here's the solution:

bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
        int count = 0;
        for (int j = 0; j < lst.size(); j++) {
            if (lst[j] == lst[i]) {
                count++;
            }
        }
        if (count > 1) {
            return false;
        }
    }
    return true;
}