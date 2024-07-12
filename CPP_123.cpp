int main { 
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<int> res = get_odd_collatz(n);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}