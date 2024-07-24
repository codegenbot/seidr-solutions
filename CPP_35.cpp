float max_num = l[0];
    for (float num : l) {
        if (num > max_num) {
            max_num = num;
        }
    }
    return max_num;
}