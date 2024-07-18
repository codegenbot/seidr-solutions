int max_even = -1;
    for (int i = y; i >= x; i--) {
        if (i % 2 == 0) {
            max_even = i;
            break;
        }
    }
    return max_even;
}