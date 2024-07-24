float max_value = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max_value) {
            max_value = l[i];
        }
    }
    return max_value;
}