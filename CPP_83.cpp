int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n > 0) {
        cout << "The count of the numbers that start or end with 1 is: " << starts_one_ends(n) << endl;
    } else {
        cout << "Invalid input. Please enter a positive integer." << endl;
    }
    return 0;
}