int main {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    vector<int> primes = count_up_to(n);

    if (primes.empty()) {
        cout << "No prime numbers found in the range 1 to " << n << endl;
    } else {
        cout << "Prime numbers up to " << n << ":";
        for (int num : primes) {
            cout << " " << num;
        }
        cout << endl;
    }

    return 0;
}