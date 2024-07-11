vector<int> result;
    if (n == 0) {
        return result;
    }
    result.push_back(3);
    if (n == 1) {
        return result;
    }
    result.push_back(1);
    if (n == 2) {
        return result;
    }
    result.push_back(2);
    int tri_n_minus_2 = 1, tri_n_minus_1 = 3, tri_n;
    for (int i = 3; i <= n; ++i) {
        if (i % 2 == 0) {
            tri_n = 1 + i / 2;
        } else {
            tri_n = tri_n_minus_1 + tri_n_minus_2 + tri_n_minus_2 + 1;
        }
        result.push_back(tri_n);
        tri_n_minus_2 = tri_n_minus_1;
        tri_n_minus_1 = tri_n;
    }
    return result;
}