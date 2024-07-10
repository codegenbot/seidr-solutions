```
int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;
    if(n < 0) {
        cout << "Error! Please enter a positive integer." << endl;
    } else {
        cout << "The special factorial of " << n << " is: " << special_factorial(n) << endl;
    }
    return 0;
}