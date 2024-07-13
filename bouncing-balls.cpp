int main() {
    double h, b;
    int n;
    cin >> h >> b >> n;
    double bounciness_index = b / h;
    double total_distance = h + b;
    for (int i = 2; i <= n; ++i) {
        total_distance += 2 * b * pow(bounciness_index, i - 1);
    }
    printf("%.15lf\n", total_distance);
    return 0;
}