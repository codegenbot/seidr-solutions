int main() {
    int numTests;
    cin >> numTests;
    
    int sum = 0;
    for (int i = 0; i < numTests; i++) {
        int num;
        cin >> num;
        sum += (num / 3 - 2);
    }
    
    cout << sum << endl;
    
    return 0;
}