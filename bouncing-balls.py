def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = max(1.0, first_bounce_height / starting_height)
    
    total_distance = starting_height
    
    cumulative_height = starting_height

    for _ in range(num_bounces):
        cumulative_height *= bounciness_index
        total_distance += cumulative_height + cumulative_height
        
    return round(total_distance, 12)