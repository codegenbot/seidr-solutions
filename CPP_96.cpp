int main
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> result = count_upto(n);
    cout << "Primes up to " << n << ": ";
    for (int prime : result) {
        cout << prime << " ";
    }
    cout << endl;
    return 0;
}