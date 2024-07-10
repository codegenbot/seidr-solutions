def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + first_bounce_height * (1 - bounciness_index) / (1 - bounciness_index**(num_bounces))
    return total_distance