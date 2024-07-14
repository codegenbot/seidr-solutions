def bouncing_balls(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    current_height = first_bounce_height
    for _ in range(num_bounces):
        total_distance += current_height * 2
        current_height *= bounciness_index
    return total_distance