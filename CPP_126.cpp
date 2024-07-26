int prev = lst[0];
    int count = 1;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] == prev) {
            count++;
            if (count > 1) {
                return false;
            }
        } else if (lst[i] < prev) {
            return false;
        } else {
            prev = lst[i];
            count = 1;
        }
    }
    return true;
}