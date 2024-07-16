for (int i = 2; i <= num_bounces; ++i) {
    first_bounce_height *= bounciness_index; // Update next bounce height
    total_distance += first_bounce_height * 2; // Add distance up only
}