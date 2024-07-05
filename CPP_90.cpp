if (lst.size() < 2) return -1; // Assuming -1 as None, as C++ does not have None

    sort(lst.begin(), lst.end());

    int first_smallest = lst[0];
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] != first_smallest) {
            return lst[i];
        }
    }

    return -1; // If there is no second smallest element
}