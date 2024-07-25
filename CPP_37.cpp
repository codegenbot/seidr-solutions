for (int i = 0; i < l.size(); i++) {
    if (i % 2 == 0) {
        continue;
    } else {
        l[i] = l[i - 1];
    }
}
sort(l.begin() + 1, l.end(), greater<float>());
return l;