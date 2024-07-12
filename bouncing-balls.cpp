int main() {
    double h, b, index, distance;
    int n;
    cin >> h >> b >> n;

    index = b / h;
    distance = h + b;

    for (int i = 2; i <= n; ++i) {
        b = b * index;
        distance += 2 * b;
    }

    cout << distance << endl;

    return 0;
}