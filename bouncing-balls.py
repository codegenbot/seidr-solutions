def bouncing_balls(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    height = first_bounce_height
    for _ in range(num_bounces):
        total_distance += height * 2
        height *= bounciness_index
    return round(total_distance, 3)