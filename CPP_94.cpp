int main() {
    vector<int> lst;
    cout << "Enter numbers (space-separated): ";
    for(int i; cin >> i; ) {
        lst.push_back(i);
    }
    int result = skjkasdkd(lst); 
    cout << "Sum of last digits of prime numbers: " << result << endl;
    return 0;
}