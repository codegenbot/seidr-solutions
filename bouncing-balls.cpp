double total_distance = start_height;
total_distance += start_height * bounciness_index * 2;
for (int i = 1; i < num_bounces; ++i) {
    start_height *= bounciness_index;
    total_distance += start_height * 2;
}