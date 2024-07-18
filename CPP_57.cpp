for (int i = 0; i < l.size() - 1; ++i) {
    if (l[i] > l[i + 1] || l[i] < l[i + 1]) {
        continue;
    }
    return false;
}
return true;