bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), issame);
    return nums;
}