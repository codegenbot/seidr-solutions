int main() {
    vector<int> lst;
    cout << "Enter the numbers (space separated): ";
    cin >> noskipws;
    int n;
    while (cin >> n) {
        lst.push_back(n);
    }
    int result = skjkasdkd(lst); 
    cout << "The sum of the digits in the largest prime number is: " << result << endl;
    return 0;
}