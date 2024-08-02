int main() {
    vector<int> lst;
    cout << "Enter numbers (separated by space): ";
    for(int i; cin >> i) {
        lst.push_back(i);
    }
    int result = skjkasdkd(lst); 
    cout << "The sum of the digits of the maximum prime number is: " << result << endl;
    return 0;
}