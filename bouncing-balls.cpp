int main() {
    double start, first_bounce;
    int num_bounces;
    cin >> start >> first_bounce >> num_bounces;

    double bounciness_index = first_bounce / start;
    double total_distance = start + (start * (1 + bounciness_index) * num_bounces);

    cout << total_distance;

    return 0;
}