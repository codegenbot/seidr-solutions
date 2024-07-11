int main() {
    int n;
    vector<int> numbers;

    while (cin >> n) {
        numbers.push_back(n);
    }

    int smallestDiff = INT_MAX;
    int cutIdx = -1;

    for (int i = 1; i < numbers.size(); i++) {
        int diff = abs(accumulate(numbers.begin(), numbers.begin() + i, 0) - accumulate(numbers.begin() + i, numbers.end(), 0));
        
        if (diff < smallestDiff) {
            smallestDiff = diff;
            cutIdx = i;
        }
    }

    for (int i = 0; i < cutIdx; i++) {
        cout << numbers[i] << endl;
    }
    cout << 0 << endl;
    for (int i = cutIdx; i < numbers.size(); i++) {
        cout << numbers[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}