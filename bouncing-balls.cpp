int main() {
    double H, HH, B, D;
    cin >> H >> HH >> B;
    D = 0;
    for (int i = 0; i < B; i++) {
        D += H;
        H = HH;
    }
    cout << D << endl;
    return 0;
}