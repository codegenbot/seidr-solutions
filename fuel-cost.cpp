int main() {
    vector<int> numbers;
    int n;
    
    while (cin >> n) {
        numbers.push_back(n);
    }
    
    int total = 0;
    for (int num : numbers) {
        total += (num / 3) - 2;
    }
    
    cout << total << endl;
    
    return 0;
}