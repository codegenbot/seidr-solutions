int main() {
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }
    
    int n = vec.size();
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(accumulate(vec.begin(), vec.begin() + i + 1, 0) - accumulate(vec.begin() + i + 1, vec.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        cout << vec[i] << endl;
    }
    for (int i = cutIndex + 1; i < n; ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}