def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    starting_height, first_bounce_height, num_bounces = map(float, [starting_height, first_bounce_height, num_bounces])
    
    total_distance = starting_height  # Initial drop
    bounciness_index = first_bounce_height / starting_height

    for _ in range(int(num_bounces)):
        total_distance += 2 * first_bounce_height
        first_bounce_height *= bounciness_index

    return round(total_distance, 15)