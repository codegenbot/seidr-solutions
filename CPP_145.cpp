bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> nums = {5, 7, 10};
    assert(issame(order_by_points(nums), vector<int>({5, 7, 10})));
    return 0;
}