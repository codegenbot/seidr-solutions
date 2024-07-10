total_distance = starting_height + (
    2 * first_bounce_height * (1 - bounciness_index**num_bounces)
) / (1 - bounciness_index)