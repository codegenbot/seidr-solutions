vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        if (n >= 1) {
            result.push_back(1);
            if (n >= 2) {
                result.push_back(2);
                int tri_n_minus_1 = 1, tri_n_minus_2 = 3, tri_n_minus_3 = 2;
                for (int i = 3; i <= n; ++i) {
                    int current = tri_n_minus_1 + tri_n_minus_2 + tri_n_minus_3;
                    result.push_back(current);
                    tri_n_minus_1 = tri_n_minus_2;
                    tri_n_minus_2 = tri_n_minus_3;
                    tri_n_minus_3 = current;
                }
            }
        }
    }
    return result;