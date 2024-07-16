vector<float> even_nums;
    vector<float> result;
    
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            even_nums.push_back(l[i]);
        }
    }
    
    sort(even_nums.begin(), even_nums.end());
    
    int even_index = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            result.push_back(even_nums[even_index++]);
        } else {
            result.push_back(l[i]);
        }
    }
    
    return result;
}