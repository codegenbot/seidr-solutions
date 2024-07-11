int n = l.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}