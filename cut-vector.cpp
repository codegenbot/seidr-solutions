```cpp
pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_index = -1;

    for(int i = 0; i < v.size(); i++) {
        long long left_sum = accumulate(v.begin(), v.begin() + (i + 1), 0LL);
        long long right_sum = accumulate(v.begin() + i, v.end(), 0LL);

        int diff = abs(left_sum - right_sum);

        if(diff < min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }

    return {{v.begin(), v.begin() + (split_index + 1)}, {v.begin() + split_index, v.end()}};
}