def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = min(first_bounce_height / starting_height, 1.0 - 1e-12)
    
    total_distance = 0
    cumulative_height = starting_height

    for _ in range(num_bounces):
        total_distance += cumulative_height
        cumulative_height *= bounciness_index

    return round(total_distance, 12)