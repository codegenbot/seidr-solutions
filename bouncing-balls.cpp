total_distance = start_height;
for (int i = 1; i < num_bounces; ++i) {
    total_distance += 2 * bounce_height * pow(bounciness_index, i);
}