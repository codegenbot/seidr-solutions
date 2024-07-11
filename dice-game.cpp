int main() {
    int n, m;
    cin >> n >> m;
    double result;
    if (n >= m)
        result = 0.5;
    else
        result = (double)(m - n) / m;
    printf("%.2f\n", result);
    return 0;
}