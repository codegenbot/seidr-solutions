vector<int> l_divisible_by_three;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l_divisible_by_three.push_back(l[i]);
        }
    }
    sort(l_divisible_by_three.begin(), l_divisible_by_three.end());
    
    for (int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l[i] = l_divisible_by_three[j++];
        }
    }
    
    return l;
}