bool issame(std::vector<int> a, std::vector<int> b){
    int total = a[0] + a[1];
    int left = std::max(0, a[2] - a[1]);
    return {total, left};
}