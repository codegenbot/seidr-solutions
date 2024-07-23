total_distance = start_height + first_bounce_height;

for (int i = 2; i <= num_bounces; ++i) {
    total_distance += 2 * first_bounce_height * pow(bounciness_index, i);

    first_bounce_height *= bounciness_index; // Update the height for the next bounce
}