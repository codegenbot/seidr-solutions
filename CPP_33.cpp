vector<int> l_divisible_by_3;
    vector<int> l_not_divisible_by_3;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l_divisible_by_3.push_back(l[i]);
        } else {
            l_not_divisible_by_3.push_back(l[i]);
        }
    }

    sort(l_divisible_by_3.begin(), l_divisible_by_3.end());

    for (int i = 0, j = 0, k = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l[i] = l_divisible_by_3[j++];
        } else {
            l[i] = l_not_divisible_by_3[k++];
        }
    }

    return l;
}