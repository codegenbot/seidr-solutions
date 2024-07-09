int main() {
    string input;
    cout << "Enter a number: ";
    getline(cin, input);
    cout << "Number is " << (is_prime(stol(input)) ? "prime" : "not prime");
    return 0;
}