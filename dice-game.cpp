Here is the solution:

double diceGame(int n, int m) {
    double total = (n + m);
    return ((n - m) / static_cast<double>(total));
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}