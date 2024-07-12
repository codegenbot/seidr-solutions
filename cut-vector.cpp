int main() {
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }
    
    int sum = 0;
    for (int n : vec) {
        sum += n;
    }
    
    int target = sum / 2;
    int prefixSum = 0;
    int idx = -1;
    for (int i = 0; i < vec.size(); ++i) {
        prefixSum += vec[i];
        if (prefixSum >= target) {
            idx = i;
            break;
        }
    }
    
    if (abs(prefixSum - target) < abs(sum - prefixSum - target)) {
        for (int i = 0; i <= idx; ++i) {
            cout << vec[i] << endl;
        }
        cout << 0 << endl;
    } else {
        for (int i = 0; i <= idx; ++i) {
            cout << vec[i] << endl;
        }
        for (int i = idx + 1; i < vec.size(); ++i) {
            cout << vec[i] << endl;
        }
    }
    
    return 0;
}