int main() {
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }
    
    int sum = accumulate(vec.begin(), vec.end(), 0);
    int target = sum / 2;
    int prefix_sum = 0;
    int idx = 0;
    for (int i = 0; i < vec.size(); i++) {
        prefix_sum += vec[i];
        if (prefix_sum >= target) {
            idx = i;
            break;
        }
    }
    
    if (idx == vec.size() - 1 || abs(2*prefix_sum - sum) < abs(2*(prefix_sum - vec[idx]) - sum)) {
        for (int i = 0; i <= idx; i++) {
            cout << vec[i] << endl;
        }
        cout << 0 << endl;
    } else {
        for (int i = 0; i <= idx - 1; i++) {
            cout << vec[i] << endl;
        }
        cout << vec[idx] << endl;
    }
    
    return 0;
}