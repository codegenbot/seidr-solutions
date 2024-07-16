int main() {
    double initial_height, bounce_height, total_bounces;
    cin >> initial_height >> bounce_height >> total_bounces;

    double bounciness_index = bounce_height / initial_height;
    double total_distance = initial_height + (initial_height + bounce_height) * bounciness_index * (1 - pow(bounciness_index, total_bounces)) / (1 - bounciness_index);

    cout << total_distance;

    return 0;
}