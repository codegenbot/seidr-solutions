int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height + first_bounce_height;

    for (int i = 2; i <= num_bounces; i++) {
        total_distance += 2 * first_bounce_height;
        first_bounce_height *= bounciness_index;
        total_distance += first_bounce_height;
    }

    cout << total_distance << endl;

    return 0;
}