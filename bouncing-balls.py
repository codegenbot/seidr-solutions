def bouncing_ball_distance(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    for _ in range(num_bounces):
        total_distance += 2 * start_height * (1 - math.pow(bounciness_index, (_ + 1)))
        start_height *= bounciness_index
    return round(total_distance, 3)