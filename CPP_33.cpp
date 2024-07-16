vector<int> l_divisible_by_three;
    vector<int> l_not_divisible_by_three;
    
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l_divisible_by_three.push_back(l[i]);
        } else {
            l_not_divisible_by_three.push_back(l[i]);
        }
    }
    
    sort(l_divisible_by_three.begin(), l_divisible_by_three.end());
    
    vector<int> result;
    int idx_divisible = 0;
    int idx_not_divisible = 0;
    
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            result.push_back(l_divisible_by_three[idx_divisible]);
            idx_divisible++;
        } else {
            result.push_back(l_not_divisible_by_three[idx_not_divisible]);
            idx_not_divisible++;
        }
    }
    
    return result;
}