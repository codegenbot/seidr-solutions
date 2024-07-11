int main() {
    double start, first_bounce, bounciness_index;
    int num_bounces;
    cin >> start >> first_bounce >> num_bounces;
    bounciness_index = first_bounce / start;
    double total_distance = start;
    for (int i = 0; i < num_bounces; i++) {
        total_distance += 2 * bounciness_index * total_distance;
    }
    cout << total_distance << endl;
    return 0;
}