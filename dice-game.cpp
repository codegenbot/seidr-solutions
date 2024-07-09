Here is the solution:

double diceGame(int n, int m) {
    if(n > m) {
        swap(n, m);
    }
    
    double sum = 1.0;
    for(int i = 1; i < n; i++) {
        sum += (1.0 / m) * (1 - (i + 1.0 / (m + 1)) / m);
    }
    
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}