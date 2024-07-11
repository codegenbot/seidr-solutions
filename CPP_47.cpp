sort(l.begin(), l.end());
    if (l.size() % 2 == 0) {
        return (l[l.size() / 2 - 1] + l[l.size() / 2]) / 2;
    } else {
        return l[l.size() / 2];
    }
}