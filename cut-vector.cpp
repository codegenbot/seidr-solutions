int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += vec[i];
    }
    
    int target = sum / 2;
    int prefixSum = 0;
    int cutIndex = -1;
    
    for (int i = 0; i < n; ++i) {
        prefixSum += vec[i];
        if (prefixSum >= target) {
            cutIndex = i;
            break;
        }
    }
    
    vector<int> subvec1(vec.begin(), vec.begin() + cutIndex + 1);
    vector<int> subvec2(vec.begin() + cutIndex + 1, vec.end());
    
    for (int num : subvec1) {
        cout << num << endl;
    }
    for (int num : subvec2) {
        cout << num << endl;
    }
    
    return 0;
}