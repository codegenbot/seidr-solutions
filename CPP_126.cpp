bool is_sorted(vector<int> lst){
    if (lst.size() <= 1) {
        return true;
    }
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
    }
    int count = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i > 0 && lst[i] == lst[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count > 1) {
            return false;
        }
    }
    return true;
}