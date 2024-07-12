int main() {
    double h_start, h_first_bounce;
    int num_bounces;
    cin >> h_start >> h_first_bounce >> num_bounces;

    double bounciness_index = h_first_bounce / h_start;
    double total_distance = h_start + h_first_bounce;

    for (int i = 1; i < num_bounces; i++) {
        total_distance += 2 * h_first_bounce;
        h_first_bounce *= bounciness_index;
        total_distance += h_first_bounce;
    }

    cout << total_distance << endl;

    return 0;
}