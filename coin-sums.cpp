int main() {
    int cents;
    cin >> cents;
    cout << cents << endl;
    cout << cents / 5 << endl;
    cout << (cents % 5) / 2 << endl;
    cout << ((cents % 5) % 2) << endl;
    return 0;
}