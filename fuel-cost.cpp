int main() {
    vector<int> numbers;
    int temp;
    while (cin >> temp) {
        numbers.push_back(temp);
    }
    
    int sum = 0;
    for (int num : numbers) {
        sum += max(num/3 - 2, 0);
    }
    
    cout << sum << endl;
    
    return 0;
}