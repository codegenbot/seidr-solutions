int main() {
    double start_height, bounce_height, bounciness_index;
    int num_bounces;
    cin >> start_height >> bounce_height >> num_bounces;

    bounciness_index = bounce_height / start_height;
    double total_distance = start_height; // Account for the first drop

    for (int i = 0; i < num_bounces; i++) {
        total_distance += 2 * bounce_height;
        bounce_height *= bounciness_index;
    }

    printf("%.15f\n", total_distance);

    return 0;
}