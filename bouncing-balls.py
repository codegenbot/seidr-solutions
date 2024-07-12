def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    starting_height = float(starting_height)
    first_bounce_height = float(first_bounce_height)
    num_bounces = float(num_bounces)
    
    total_distance = starting_height  # Initial drop

    for _ in range(int(num_bounces)):
        total_distance += first_bounce_height + first_bounce_height * (first_bounce_height / starting_height)
        first_bounce_height *= (first_bounce_height / starting_height) ** 2

    return round(total_distance, 15)