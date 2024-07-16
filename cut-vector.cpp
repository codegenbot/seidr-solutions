int main() {
    vector<int> vec;
    int n;
    while (cin >> n) {
        vec.push_back(n);
    }
    
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    
    int target = sum / 2;
    int prefixSum = 0;
    int idx = 0;
    for (int i = 0; i < vec.size(); ++i) {
        prefixSum += vec[i];
        if (prefixSum >= target) {
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