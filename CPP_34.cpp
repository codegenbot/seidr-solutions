int main() {
    vector<int> nums = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    set<int> num_set(nums.begin(), nums.end());
    
    assert(issame(num_set, set<int>({0, 2, 3, 5, 9, 123}));
    
    return 0;
}