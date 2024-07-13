int main() {
    double starting_height, bounce_height, bounciness_index, total_distance;
    int num_bounces;

    cin >> starting_height >> bounce_height >> num_bounces;

    bounciness_index = bounce_height / starting_height;

    total_distance = starting_height + 2 * starting_height * (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index);

    cout << total_distance;

    return 0;
}