if(lst.size() < 2) {
        return -1;
    }
    sort(lst.begin(), lst.end());
    int secondSmallest = lst[1];
    if(lst[0] == secondSmallest) {
        return -1;
    }
    return secondSmallest;
}