int main() {
    vector<int> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        int new_num = num / 3 - 2;
        vec.push_back(new_num);
    }
    
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    
    cout << sum;
    
    return 0;
}