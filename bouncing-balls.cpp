int main() {
    double start_height, bounce_height, bounciness_index, total_distance;
    int num_bounces;

    cin >> start_height >> bounce_height >> num_bounces;

    bounciness_index = bounce_height / start_height;
    total_distance = start_height + bounce_height + (bounce_height * bounciness_index) * (num_bounces - 1);

    cout << total_distance;

    return 0;
}