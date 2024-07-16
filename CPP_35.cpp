float max_val = l[0];
    for (auto num : l) {
        if (num > max_val) {
            max_val = num;
        }
    }
    return max_val;
}