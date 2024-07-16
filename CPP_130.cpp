vector<int> result;
    result.push_back(3);
    if (n == 0) {
        return result;
    }
    result.push_back(1);
    if (n == 1) {
        return result;
    }
    result.push_back(2);
    int tri_n_minus_2 = 1;
    int tri_n_minus_1 = 3;
    for (int i = 3; i <= n; ++i) {
        int tri_n;
        if (i % 2 == 0) {
            tri_n = 1 + i / 2;
        } else {
            tri_n = tri_n_minus_1 + tri_n_minus_2 + tri_n_minus_1;
        }
        result.push_back(tri_n);
        tri_n_minus_2 = tri_n_minus_1;
        tri_n_minus_1 = tri_n;
    }
    return result;
}