for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            int start = i;
            while (i < l.size() && i % 3 == 0) {
                ++i;
            }
            sort(l.begin() + start, l.begin() + i);
        }
    }
    return l;
}