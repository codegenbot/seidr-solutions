sort(lst.begin(), lst.end());
    for (int i = lst.size() - 1; i >= 0; i--) {
        int num = lst[i];
        int freq = count(lst.begin(), lst.end(), num);
        if (num > freq) continue;
        return num;
    }
    return -1;
}