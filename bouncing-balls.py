def bouncing_ball(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    height = first_bounce_height
    for _ in range(num_bounces - 1):
        height *= bounciness_index
        total_distance += 2 * height
    return str(format(total_distance, ".4f"))