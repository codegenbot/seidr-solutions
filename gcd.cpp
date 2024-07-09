int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD of the numbers is: " << gcd(a, b) << endl;

    string text, target;
    cout << "Enter the text and the target to find its indices: ";
    getline(cin, text);
    getline(cin, target);
    vector<int> result = findIndices(text, target);
    cout << "The indices of the target are: ";
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}