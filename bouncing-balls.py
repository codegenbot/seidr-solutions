def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    current_height = start_height
    for _ in range(num_bounces):
        height_change = (current_height + current_height * bounciness_index) - current_height
        total_distance += 2 * height_change
        current_height *= bounciness_index

    return str(round(total_distance, 2))