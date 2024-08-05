def calculate_bouncing_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    current_height = first_bounce_height
    for _ in range(num_bounces - 1):
        current_height /= bounciness_index
        total_distance += current_height
    return round(total_distance + current_height, 5)