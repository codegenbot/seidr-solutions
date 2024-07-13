double calculate_total_distance(double starting_height, double bounce_height, int num_bounces) {
    double bounciness_index = bounce_height / starting_height;
    double total_distance = 0;

    for (int i = 0; i < num_bounces; ++i) {
        total_distance += starting_height * pow(bounciness_index, i);
    }

    total_distance = starting_height * (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index);

    return total_distance;
}