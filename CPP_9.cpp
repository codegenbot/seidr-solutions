```int main() {
    vector<int> numbers;
    int num;
    
    cout << "Enter numbers (enter -1 to stop): ";
    while ((cin >> num) && (num != -1)) {
        numbers.push_back(num);
    }
    
    vector<int> maxNumbers = rolling_max(numbers);

    for (int i = 0; i < maxNumbers.size(); i++) {
        cout << "Maximum up to " << i + 1 << " is " << maxNumbers[i] << endl;
    }

    return 0;
}```