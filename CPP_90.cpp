sort(lst.begin(), lst.end());
    int count = 1;
    
    for (int i = 0; i < lst.size(); ++i) {
        if (lst[i] != lst[0]) {
            count++;
        }
        if (count == 2) {
            return lst[i];
        }
    }
    
    return -1;
}