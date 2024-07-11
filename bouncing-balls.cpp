int main() {
    double start_height, bounce_height, bounciness_index, total_distance;
    int num_bounces;

    cin >> start_height >> bounce_height >> num_bounces;

    bounciness_index = bounce_height / start_height;
    total_distance = start_height + bounce_height; // First bounce

    for (int i = 2; i <= num_bounces; ++i) {
        bounce_height *= bounciness_index;
        total_distance += bounce_height * 2;
    }

    cout << total_distance << endl;

    return 0;
}