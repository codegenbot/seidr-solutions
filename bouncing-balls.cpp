int main() {
    double h0, h, bounciness;
    int num_bounces;
    cin >> h0 >> h >> num_bounces;

    bounciness = h / h0;
    double total_distance = h0 + h;

    for (int i = 2; i <= num_bounces; ++i) {
        total_distance += h * pow(bounciness, i);
    }

    cout << total_distance;

    return 0;
}