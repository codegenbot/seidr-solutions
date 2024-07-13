int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    
    int half = sum / 2;
    int prefixSum = 0;
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        prefixSum += vec[i];
        if (prefixSum >= half) {
            idx = i;
            break;
        }
    }
    
    vector<int> subVec1(vec.begin(), vec.begin() + idx + 1);
    vector<int> subVec2(vec.begin() + idx + 1, vec.end());
    
    for (int num : subVec1) {
        cout << num << endl;
    }
    for (int num : subVec2) {
        cout << num << endl;
    }
    
    return 0;
}