int main() {
    vector<int> vec;
    int num;
    
    while (cin >> num) {
        vec.push_back(num);
    }
    
    int n = vec.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += vec[i];
    }
    
    int half_sum = 0;
    int idx = -1;
    for (int i = 0; i < n; i++) {
        half_sum += vec[i];
        if (2 * half_sum >= sum) {
            idx = i;
            break;
        }
    }
    
    for (int i = 0; i <= idx; i++) {
        cout << vec[i] << endl;
    }
    for (int i = idx + 1; i < n; i++) {
        cout << vec[i] << endl;
    }
    
    return 0;
}