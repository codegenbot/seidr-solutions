int main() {
    double starting_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    cin >> starting_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / starting_height;
    total_distance = starting_height + first_bounce_height;

    for (int i = 2; i <= num_bounces; ++i) {
        total_distance += 2 * first_bounce_height * pow(bounciness_index, i - 1);
    }

    cout << total_distance << endl;

    return 0;
}