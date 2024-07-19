sort(lst.begin(), lst.end());
    int count = 0;
    int prev = lst[0];
    
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] != prev) {
            count++;
            prev = lst[i];
        }
        if (count == 1) {
            return lst[i];
        }
    }
    
    return -1;
}