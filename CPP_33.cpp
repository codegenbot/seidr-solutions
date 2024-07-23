for (int i = 2; i < l.size(); i += 3) {
    sort(l.begin() + i - 2, l.begin() + i + 1);
}
return l;
}