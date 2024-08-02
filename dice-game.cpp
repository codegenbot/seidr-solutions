Here is the solution:

double calculateProbability(int n, int m) {
    return (double)min(n - 1, m) / (n * m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << calculateProbability(n, m) << endl;
    return 0;
}