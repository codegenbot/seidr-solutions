int main() {
    vector<int> numbers;
    int n;
    while (cin >> n) {
        numbers.push_back(n);
    }
    
    int sum = 0;
    for (int num : numbers) {
        sum += max(num / 3 - 2, 0);
    }
    
    cout << sum << endl;
    
    return 0;
}