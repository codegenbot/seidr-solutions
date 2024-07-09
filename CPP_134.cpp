```
int sumEvenFibonacci(int n) {
    int a = 0;
    int b = 1;
    int totalSum = 0;

    for (int i = 0; i <= n; ++i) {
        if ((i % 2 == 0) && (a <= n)) {
            totalSum += a;
        }
        int temp = a;
        a = b;
        b = temp + b;
    }

    return totalSum;
}

int main() {
    int n;
    cout << "Enter the limit: ";
    cin >> n;
    cout << "The sum of even Fibonacci numbers up to " << n << " is " << sumEvenFibonacci(n) << endl;
    return 0;
}