int main() {
    int cents;
    cin >> cents;
    cout << cents / 25 << endl;
    cents %= 25;
    cout << cents / 10 << endl;
    cents %= 10;
    cout << cents / 5 << endl;
    cents %= 5;
    cout << cents << endl;
    return 0;
}