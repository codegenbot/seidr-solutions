double total_distance = start_height; // Exclude the initial drop distance

for (int i = 1; i < num_bounces; ++i) {
    first_bounce_height *= bounciness_index; // Update next bounce height
    total_distance += 2 * first_bounce_height; // Add distance up and down for each bounce
}
total_distance += first_bounce_height; // Include the final bounce distance