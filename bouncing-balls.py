def calculate_distance(starting_height, first_bounce_height, num_bounces):
    starting_height = float(starting_height)
    first_bounce_height = float(first_bounce_height)
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    current_height = starting_height

    for _ in range(num_bounces):
        total_distance += current_height
        current_height *= bounciness_index

    return total_distance