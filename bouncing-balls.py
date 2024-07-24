def bouncing_ball(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    current_height = first_bounce_height
    for _ in range(num_bounces - 1):
        total_distance += 2 * (start_height + current_height)
        current_height *= bounciness_index
    return str(total_distance)