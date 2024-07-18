for (int i = 1; i < l.size(); ++i) {
    if (l[i] < l[i - 1]) {
        return false;
    }
}
return true;