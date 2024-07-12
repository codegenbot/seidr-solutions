def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    starting_height = float(starting_height)
    first_bounce_height = float(first_bounce_height)
    num_bounces = int(num_bounces)
    
    total_distance = starting_height  # Initial drop
    bounciness_index = first_bounce_height / starting_height

    for _ in range(num_bounces):
        bounce_height = first_bounce_height * bounciness_index
        total_distance += bounce_height
        first_bounce_height = bounce_height

    return round(total_distance, 15)