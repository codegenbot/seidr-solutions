for (int i = 0; i < l.size() - 1; i++) {
    if (l[i] > l[i + 1]) {
        for (int j = i + 1; j < l.size() - 1; j++) {
            if (l[j] < l[j + 1]) {
                return false;
            }
        }
        return true;
    } else if (l[i] < l[i + 1]) {
        for (int j = i + 1; j < l.size() - 1; j++) {
            if (l[j] > l[j + 1]) {
                return false;
            }
        }
        return true;
    }
}
return true;