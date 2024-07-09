int main {
    vector<int> lst;
    int num;
    cout << "Enter numbers separated by space: ";
    while (cin >> num) {
        lst.push_back(num);
    }
    cout << "Sum of digits in the max prime number is: " << maxPrime(lst) << endl;
    return 0;
}