int main() {
    double starting_height, first_bounce_height;
    int num_bounces;
    cin >> starting_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / starting_height;
    double total_distance = starting_height;

    for (int i = 0; i < num_bounces; ++i) {
        total_distance += 2 * first_bounce_height;
        first_bounce_height *= bounciness_index;
    }

    cout << total_distance << endl;

    return 0;
}