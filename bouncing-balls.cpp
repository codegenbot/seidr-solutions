for (int i = 2; i <= num_bounces; ++i) {
    total_distance += 2 * first_bounce_height * pow(bounciness_index, i) + first_bounce_height * pow(bounciness_index, i - 1);
}