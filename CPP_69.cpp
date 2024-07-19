int maxElem = -1;
    for (int i = 1; i <= lst.size(); i++) {
        int freq = 0;
        for (int j = 0; j < lst.size(); j++) {
            if (lst[j] == i) {
                freq++;
            }
        }
        if (freq >= i && i > maxElem) {
            maxElem = i;
        }
    }
    return maxElem;
}