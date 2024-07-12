double total_distance = start_height + first_bounce_height;
double total_bounce_height = first_bounce_height / bounciness_index;

for (int i = 2; i <= num_bounces; ++i) {
    total_bounce_height *= bounciness_index;
    total_distance += 2 * total_bounce_height;
}