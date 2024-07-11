    int n = l.size();
    bool increasing = true, decreasing = true;

    for (int i = 1; i < n; i++) {
        if (l[i] < l[i - 1])
            increasing = false;
        if (l[i] > l[i - 1])
            decreasing = false;
    }

    return increasing || decreasing;