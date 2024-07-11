def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = max(first_bounce_height / starting_height, 1.0)
    
    total_distance = starting_height + 2 * sum(bounciness_index**n * starting_height for n in range(num_bounces))

    return round(total_distance, 12)