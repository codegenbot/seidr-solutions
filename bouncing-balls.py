def bouncing_balls():
    starting_height = float(input())
    height_after_first_bounce = float(input())
    bounciness_index = height_after_first_bounce / starting_height
    num_bounces = int(input())

    total_distance = 0
    current_height = height_after_first_bounce

    for _ in range(num_bounces):
        total_distance += 2 * abs(current_height)
        current_height *= bounciness_index

    print(total_distance)


bouncing_balls()