struct order_by_points {
    order_by_points() {}
    
    bool operator()(const int& a, const int& b) const {
        // Previous code for comparing integers based on the sum of digits
    }
};

order_by_points cmp;

std::sort(nums.begin(), nums.end(), cmp);

return nums;