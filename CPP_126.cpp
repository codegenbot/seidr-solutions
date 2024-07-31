int prev = lst[0];
    int dupCount = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] == prev) {
            dupCount++;
            if (dupCount > 1) {
                return false;
            }
        } else if (lst[i] < prev) {
            return false;
        }
        prev = lst[i];
    }
    return true;
}