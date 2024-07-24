def bouncing_ball(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    distance = 0
    for _ in range(num_bounces):
        distance += (2 * start_height) + (
            (start_height - first_bounce_height) * bounciness_index ** (num_bounces - 1)
        )
        start_height *= bounciness_index
    return round(distance, 5)