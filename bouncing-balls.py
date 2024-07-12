def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = float(first_bounce_height) / float(starting_height)
    total_distance = 0.0

    for _ in range(num_bounces):
        first_bounce_height *= bounciness_index
        total_distance += starting_height + 2 * first_bounce_height

    return total_distance