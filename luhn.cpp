int main() {
    vector<int> digits(16);
    int sum = 0;
  
    for (int i = 0; i < 16; ++i) {
        cin >> digits[i];
    }
  
    for (int i = 1; i < 16; i += 2) {
        int doubled = digits[i] * 2;
        sum += (doubled > 9) ? (doubled - 9) : doubled;
    }
    
    cout << sum << endl;
    
    return 0;
}