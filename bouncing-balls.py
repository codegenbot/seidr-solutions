def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height
    cumulative_height = first_bounce_height
    for _ in range(num_bounces - 1):
        cumulative_height *= bounciness_index
        total_distance += cumulative_height
    return round(total_distance, 12)