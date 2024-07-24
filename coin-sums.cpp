int main() {
    int cents;
    cin >> cents;

    cout << cents % 25 << endl;
    cout << (cents % 25) / 10 << endl;
    cout << ((cents % 25) % 10) / 5 << endl;
    cout << ((cents % 25) % 10) % 5 << endl;

    return 0;
}