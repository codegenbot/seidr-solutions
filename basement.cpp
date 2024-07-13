int main() {
    int N;
    cin >> N;
    vector<int> nums(N);
    int sum = 0;
    
    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
        sum += nums[i];
        if (sum < 0) {
            cout << i << endl;
            return 0;
        }
    }
    
    cout << 0 << endl;
    
    return 0;
}