int main() {
    double h, hb;
    int n;
    cin >> h >> hb >> n;

    double bounciness = hb / h;
    double total_distance = h + 2 * h * bounciness * pow(bounciness, n-1);

    cout << total_distance << endl;

    return 0;
}