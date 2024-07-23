for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            sort(l.begin() + i, l.begin() + i + 3);
        }
    }
    return l;
}