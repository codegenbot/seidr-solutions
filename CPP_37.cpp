for (int i = 0; i < l.size(); i += 2) {
    if (i + 1 < l.size()) {
        l[i] = l[i + 1];
    }
}
sort(l.begin(), l.end());
return l;
}