def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    current_height = start_height
    for _ in range(num_bounces):
        distance_on_one_side = 2 * (current_height + first_bounce_height)
        total_distance += distance_on_one_side
        current_height *= bounciness_index

    return str(round(total_distance, 2))