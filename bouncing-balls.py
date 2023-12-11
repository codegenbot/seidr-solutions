def calculate_distance(starting_height, bounce_height, num_bounces):
    bounciness_index = bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (1 - bounciness_index) * starting_height + bounciness_index * (starting_height - bounce_height)
        starting_height = bounce_height
        bounce_height = bounciness_index * bounce_height
    return total_distance
