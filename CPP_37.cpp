for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 1 && i + 1 < l.size()) {
            l[i] = l[i + 1];
        }
    }
    sort(l.begin(), l.end(), greater<float>());
    return l;
}