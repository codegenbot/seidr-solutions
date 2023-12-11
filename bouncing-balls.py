def bouncing_balls(starting_height, height_after_first_bounce, num_bounces):
    if starting_height <= 0 or height_after_first_bounce <= 0:
        return 0
    bounciness_index = height_after_first_bounce / starting_height
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (starting_height + (i * bounciness_index)) ** 2
    return total_distance