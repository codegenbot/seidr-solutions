Here is the solution:

bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) return false;
    }
    bool has_duplicates = false;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (int j = 0; j < lst.size(); j++) {
            if (lst[i] == lst[j]) count++;
        }
        if (count > 1) has_duplicates = true;
    }
    return !has_duplicates;
}