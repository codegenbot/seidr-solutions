vector<int> l_divisible_by_three;
    vector<int> l_not_divisible_by_three;
    vector<int> l_sorted_divisible_by_three;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l_divisible_by_three.push_back(l[i]);
            l_sorted_divisible_by_three.push_back(l[i]);
        } else {
            l_not_divisible_by_three.push_back(l[i]);
        }
    }

    sort(l_sorted_divisible_by_three.begin(), l_sorted_divisible_by_three.end());

    int j = 0, k = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l_not_divisible_by_three[j] = l_sorted_divisible_by_three[k];
            ++j;
            ++k;
        }
    }

    return l_not_divisible_by_three;
}