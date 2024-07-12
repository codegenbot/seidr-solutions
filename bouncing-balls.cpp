double total_distance = start_height;
for (int i = 1; i <= num_bounces; ++i) {
    total_distance += 2 * first_bounce_height * std::pow(bounciness_index, i);
}