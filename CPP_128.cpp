int main() {
    vector<int> arr;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        arr.push_back(num);
    }
    
    int result = prod_signs(arr);
    cout << result;
    
    return 0;
}