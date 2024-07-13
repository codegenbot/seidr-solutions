std::vector<std::vector<int>> cutVector(std::vector<int> v) {
    if(v.size() <= 1) {
        return {{v}};
    }
    
    int n = v.size();
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    
    long long leftSum = 0, rightSum = sum;

    std::vector<std::vector<int>> res;
    res.push_back(std::vector<int>());
    res.push_back(std::vector<int>());

    for (int i = 0; i < n; i++) {
        long long diff = std::abs(leftSum - rightSum);
        if (diff == 1) { 
            break; // we've found the cut point, no need to continue
        }
        leftSum += v[i];
        rightSum -= v[i];
    }
    
    res[0].assign(v.begin(), v.begin() + (i > 0 ? i - 1 : i));
    
    res[1].assign(v.begin() + ((i > 0) ? i : 0), v.end());
    
    return res;
}