long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    long long num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (gcd(num1, num2) == 1) {
        cout << "GCD of the given numbers is 1" << endl;
    } else {
        long long result = gcd(num1, num2);
        cout << "GCD of the given numbers is " << result << endl;
    }
    
    return 0;
}