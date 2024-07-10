vector<int> l_copy = l;
    for (int i = 0; i < l.size(); i++) {
        if ((i + 1) % 3 == 0) {
            sort(l_copy.begin() + i - 2, l_copy.begin() + i + 1);
        }
    }
    return l_copy;
}