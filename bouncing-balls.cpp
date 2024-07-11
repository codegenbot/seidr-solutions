int main() {
    double start_height, bounce_height, total_distance = 0.0, bounciness_index;
    int num_bounces;

    cin >> start_height >> bounce_height >> num_bounces;

    bounciness_index = bounce_height / start_height;

    total_distance = start_height + bounce_height; // First bounce

    for (int i = 1; i < num_bounces; ++i) {
        total_distance += 2 * bounce_height; // Up and down for each bounce
        bounce_height *= bounciness_index; // Height decreases with each bounce
    }

    cout << total_distance << endl;

    return 0;
}