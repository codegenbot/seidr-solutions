for (int i = 0; i < l.size(); i++) {
    if (i % 2 == 0) continue;
    l[i] = l[i - 1];
}
sort(l.begin(), l.end());
return l;
}