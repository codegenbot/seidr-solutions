// Check if the vector is sorted in ascending order with no duplicates
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
    }

    // Check for duplicates
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] == lst[i + 1]) {
            return false;
        }
    }

    return true;
}