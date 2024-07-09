int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;
    if(is_prime(num))
        cout << "Number is prime";
    else
        cout << "Number is not prime";

    return 0;
}