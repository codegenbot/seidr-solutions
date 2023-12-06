def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        distance = (starting_height + (i * bounciness_index))
        total_distance += distance
    return total_distance