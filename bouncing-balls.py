def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    bounce_height = start_height  
    for _ in range(num_bounces):
        distance_per_bounce = 2 * (bounce_height + bounce_height)
        total_distance += distance_per_bounce
        bounce_diff = (bounce_height - bounce_height) / 2 if bounce_height > 0 else 0
        bounce_height, _ = bounce_height - bounce_diff, bounce_diff if bounce_diff > 0 else 0

    return format(total_distance, ".4f")