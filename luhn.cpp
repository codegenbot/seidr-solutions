int main() {
    vector<int> digits(16);
    for(int i=0; i<16; i++) {
        cin >> digits[i];
    }
    
    int sum = 0;
    for(int i=0; i<16; i++) {
        int num = digits[i];
        if(i % 2 == 1) {
            num *= 2;
            if(num > 9) {
                num -= 9;
            }
        }
        sum += num;
    }
    
    cout << sum << endl;
    
    return 0;
}