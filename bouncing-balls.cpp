int main() {
    double h0, h1;
    int bounces;
    cin >> h0 >> h1 >> bounces;
    double bounciness = h1 / h0;
    double total_distance = h0 + h0 * (1 + bounciness) * (1 - pow(bounciness, bounces)) / (1 - bounciness);
    cout << total_distance << endl;
    return 0;
}