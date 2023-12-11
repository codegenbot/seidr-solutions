def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (2 * bounciness) ** (i + 1) - 1
    return total_distance
