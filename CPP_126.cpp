int count = 0;
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
        if (lst[i] == lst[i + 1]) {
            count++;
            if (count > 1) {
                return false;
            }
        }
    }
    return true;
}