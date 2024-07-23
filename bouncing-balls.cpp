for (int i = 2; i <= num_bounces; ++i) {
    total_distance += 2 * total_distance * std::pow(bounciness_index, i - 1);
}