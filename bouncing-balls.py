def bouncing_balls(starting_height, first_bounce_height, num_of_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0.0
    for i in range(num_of_bounces):
        total_distance += (1 - bounciness_index ** (i + 1)) * starting_height
    return total_distance
