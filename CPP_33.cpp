vector<int> l_divisible_by_3;
    vector<int> l_not_divisible_by_3;
    vector<int> l_sorted_divisible_by_3;
    
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l_divisible_by_3.push_back(l[i]);
            l_sorted_divisible_by_3.push_back(l[i]);
        } else {
            l_not_divisible_by_3.push_back(l[i]);
        }
    }
    
    sort(l_sorted_divisible_by_3.begin(), l_sorted_divisible_by_3.end());
    
    vector<int> result;
    int idx_divisible_by_3 = 0;
    int idx_not_divisible_by_3 = 0;
    
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            result.push_back(l_sorted_divisible_by_3[idx_divisible_by_3]);
            idx_divisible_by_3++;
        } else {
            result.push_back(l_not_divisible_by_3[idx_not_divisible_by_3]);
            idx_not_divisible_by_3++;
        }
    }
    
    return result;
}