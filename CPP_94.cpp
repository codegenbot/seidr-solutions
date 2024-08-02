int main() {
    vector<int> lst;
    cout << "Enter the numbers (space separated): ";
    for(int i; cin >> i; ) {
        lst.push_back(i);
    }
    int result = skjkasdkd(lst); 
    cout << "The sum of digits in all prime numbers is: " << result << endl;
    return 0;
}