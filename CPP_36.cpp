int count = 0;
    for (int i = 11; i < n; i += 11) {
        if (i % 7 == 0) {
            count++;
        }
    }
    for (int i = 13; i < n; i += 13) {
        if (i % 7 == 0) {
            count++;
        }
    }
    return count;
}