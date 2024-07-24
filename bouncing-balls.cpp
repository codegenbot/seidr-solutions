for (int i = 2; i <= num_bounces; ++i) {
    total_distance += 2 * first_bounce_height * std::pow(bounciness_index, i) * (1 + bounciness_index) * (1 + bounciness_index);
}