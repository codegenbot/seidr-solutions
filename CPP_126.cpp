if (lst.size() < 2) return true;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] == lst[i-1] || lst[i] < lst[i-1]) {
            return false;
        }
    }
    return true;
}