int maxEven = -1;
    for (int i = y; i >= x; i--) {
        if (i % 2 == 0) {
            maxEven = i;
            break;
        }
    }
    return maxEven;
}