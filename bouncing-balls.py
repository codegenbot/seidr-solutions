def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + 2 * first_bounce_height
    for _ in range(2, num_bounces + 1):
        first_bounce_height *= bounciness_index
        total_distance += 2 * first_bounce_height
    return total_distance