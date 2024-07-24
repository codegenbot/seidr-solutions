def bouncing_balls():
    start_height = float(input())
    height_after_first_bounce = float(input())
    num_bounces = int(input())

    bounciness_index = height_after_first_bounce / start_height

    total_distance = 0
    current_height = start_height
    for _ in range(num_bounces):
        total_distance += 2 * (current_height - height_after_first_bounce)
        current_height *= bounciness_index

    print(total_distance)


bouncing_balls()