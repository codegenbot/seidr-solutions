int main() {
    double starting_height, height_first_bounce;
    int num_bounces;
    cin >> starting_height >> height_first_bounce >> num_bounces;

    double bounciness_index = height_first_bounce / starting_height;
    double total_distance = starting_height;

    for (int i = 0; i < num_bounces; ++i) {
        total_distance += 2 * height_first_bounce;
        height_first_bounce *= bounciness_index;
    }

    cout << total_distance << endl;

    return 0;
}