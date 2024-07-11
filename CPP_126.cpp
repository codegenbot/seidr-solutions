int count = 1;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] == lst[i - 1]) {
            count++;
            if (count > 1) {
                return false;
            }
        } else if (lst[i] < lst[i - 1]) {
            return false;
        }
    }
    return true;
}