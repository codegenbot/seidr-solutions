float max_val = l[0];
    for (int i = 1; i < l.size(); i++) {
        max_val = max(max_val, l[i]);
    }
    return max_val;
}