int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance = 0;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;
    bounciness_index = first_bounce_height / start_height;

    for (int i = 0; i < num_bounces; i++) {
        total_distance += start_height + first_bounce_height;
        start_height = first_bounce_height;
        first_bounce_height *= bounciness_index;
    }

    cout << total_distance << endl;

    return 0;
}