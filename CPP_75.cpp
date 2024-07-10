int main() {
    int num;
    cout << "Enter a number less than 100: ";
    cin >> num;
    cout << (is_multiply_prime(num) ? "true" : "false") << endl;

    return 0;
}