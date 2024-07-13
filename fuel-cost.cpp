int main() {
    vector<int> numbers;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        numbers.push_back((num / 3) - 2);
    }
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += numbers[i];
    }
    
    cout << sum << endl;
    
    return 0;
}