def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (starting_height + (i * bounciness_index))
        if i == num_bounces - 1:
            total_distance += starting_height
    return total_distance