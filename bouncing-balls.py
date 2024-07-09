def calculate_total_distance(starting_height, bounce_height, num_bounces):
    bounciness_index = bounce_height / starting_height
    total_distance = round(starting_height + ((2 * bounce_height * (1 - bounciness_index**num_bounces)) / (1 - bounciness_index)), 15)
    return total_distance