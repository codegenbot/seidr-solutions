double calculate_total_distance(double starting_height, double bounce_height, int num_bounces) {
    double bounciness_index = bounce_height / starting_height;
    double total_distance = starting_height;

    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += 2 * bounce_height * pow(bounciness_index, i);
    }

    return total_distance;
}