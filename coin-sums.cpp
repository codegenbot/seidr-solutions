int main() {
    int cents;
    cin >> cents;
    cout << cents % 5 << endl;
    cout << cents / 5 % 2 << endl;
    cout << cents / 10 % 5 << endl;
    cout << cents / 25 << endl;
    return 0;
}