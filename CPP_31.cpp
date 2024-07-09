int main 
{ 
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (is_prime(num)) {
        cout << to_string(num) << " is a prime number.\n";
    } else {
        cout << to_string(num) << " is not a prime number.\n";
    }
    return 0;