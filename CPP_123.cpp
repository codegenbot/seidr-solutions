int main {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    deque<int> res = get_odd_collatz(n);
    for (auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}