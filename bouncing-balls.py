def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    bounce_height = start_height  
    for _ in range(num_bounces):
        bounce_height *= bounciness_index
        distance_per_bounce = 2 * bounce_height
        total_distance += distance_per_bounce

    return f"{total_distance:.4f}"