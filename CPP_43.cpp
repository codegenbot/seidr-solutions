sort(l.begin(), l.end());
    int i = 0, j = l.size() - 1;
    while (i < j) {
        if (l[i] + l[j] == 0) {
            return true;
        } else if (l[i] + l[j] < 0) {
            i++;
        } else {
            j--;
        }
    }
    return false;
}