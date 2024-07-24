int main() {
    int n;
    vector<int> vec;
    while (cin >> n) {
        vec.push_back(n);
    }
    
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    
    int target = sum / 2;
    int prefixSum = 0;
    int index = 0;
    for (int i = 0; i < vec.size(); ++i) {
        prefixSum += vec[i];
        if (prefixSum >= target) {
            index = i;
            break;
        }
    }
    
    vector<int> subVec1(vec.begin(), vec.begin() + index + 1);
    vector<int> subVec2(vec.begin() + index + 1, vec.end());
    
    for (int num : subVec1) {
        cout << num << endl;
    }
    for (int num : subVec2) {
        cout << num << endl;
    }
    
    return 0;
}