int gcd(int a, int b) {
    if (b == 0)
        return a;
    else {
        int temp = gcd(b, a % b);
        while (a % temp != 0 && b % temp != 0) 
            temp--;
        return temp;
    }
}

int main() {
    int a;
    cout << "Enter first number: ";
    cin >> a;

    int b;
    cout << "Enter second number: ";
    cin >> b;

    cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    return 0;
}