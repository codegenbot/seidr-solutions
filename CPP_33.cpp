bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    vector<int> divisible_by_three;
    vector<int> not_divisible_by_three;
    
    for (int i = 0; i < l.size(); ++i) {
        if (l[i] % 3 == 0) {
            divisible_by_three.push_back(l[i]);
        } else {
            not_divisible_by_three.push_back(l[i]);
        }
    }
    
    sort(divisible_by_three.begin(), divisible_by_three.end());
    
    vector<int> result;
    int j = 0;
    int k = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (l[i] % 3 == 0) {
            result.push_back(divisible_by_three[j]);
            ++j;
        } else {
            result.push_back(not_divisible_by_three[k]);
            ++k;
        }
    }
    
    return result;
}