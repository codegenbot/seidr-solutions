int main() {
    vector<int> lst;
    cout << "Enter numbers (separated by space): ";
    for(int i; cin >> i) {
        lst.push_back(i);
    }
    int result = skjkasdkd(lst); 
    cout << "Sum of digits of the largest prime number: " << result << endl;
    return 0;
}