total_distance = start_height;
for (int i = 0; i < num_bounces; ++i) {
    total_distance += start_height * (std::pow(bounciness_index, i) + std::pow(bounciness_index, i + 1));
}