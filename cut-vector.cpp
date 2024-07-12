int main() {
    vector<int> vec;
    int n;
    cin >> n;
    vec.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    
    int target = sum / 2;
    int prefixSum = 0;
    int idx = 0;
    
    while (idx < n && prefixSum < target) {
        prefixSum += vec[idx];
        ++idx;
    }
    
    if (abs(prefixSum - target) < abs(prefixSum - vec[idx] - target)) {
        --idx;
    }
    
    for (int i = 0; i < idx; ++i) {
        cout << vec[i] << endl;
    }
    for (int i = idx; i < n; ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}