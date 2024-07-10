pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int min_diff = INT_MAX;
    int split_left = 0, split_right = 0;

    for (int left = 0, right = v.size() - 1; left <= right;) {
        int diff = abs(v[left] - v[right]);
        if (diff <= min_diff) {
            min_diff = diff;
            split_left = left;
            split_right = right;
        }
        if (v[left] < v[right]) {
            ++left;
        } else {
            --right;
        }
    }

    return {{v.begin(), v.begin() + split_left}, {v.begin() + split_left, v.end()}};
}