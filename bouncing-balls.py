def bouncing_ball(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    distance = 0
    height = start_height
    for _ in range(num_bounces):
        if height > 0:
            height *= bounciness_index
            distance += 2 * height
        else:
            break
    return round(distance, 5)