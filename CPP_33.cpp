for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            int start = i;
            int end = min(i + 3, (int)l.size());
            sort(l.begin() + start, l.begin() + end);
        }
    }
    return l;
}