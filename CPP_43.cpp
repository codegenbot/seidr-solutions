for (int i = 0; i < l.size() - 1 && i >= 0; i++) {
    if (l[i] + l[i+1] == 0)
        return true;
}
return false;