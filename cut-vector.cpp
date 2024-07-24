int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int left_sum = 0, right_sum = accumulate(vec.begin(), vec.end(), 0);
    for (int i = 0; i < n; ++i) {
        left_sum += vec[i];
        right_sum -= vec[i];
        if (left_sum == right_sum || abs(left_sum - right_sum) <= 1) {
            vector<int> left(vec.begin(), vec.begin() + i + 1);
            vector<int> right(vec.begin() + i + 1, vec.end());
            for (int num : left) {
                cout << num << endl;
            }
            for (int num : right) {
                cout << num << endl;
            }
            break;
        }
    }
    
    return 0;
}