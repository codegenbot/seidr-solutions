for (int i = 0; i < l.size(); i += 2) {
    l[i] = i + 1 < l.size() ? l[i + 1] : l[i];
}
sort(l.begin(), l.end());
return l;
}