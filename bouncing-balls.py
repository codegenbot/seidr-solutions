def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    total_distance_before_first_bounce = 2 * start_height
    bounciness_index = first_bounce_height / start_height

    total_distance = total_distance_before_first_bounce
    current_height = start_height

    for _ in range(num_bounces):
        total_distance += (current_height - start_height) * 2
        current_height *= 2 ** (-bounciness_index + 1)

    print(total_distance)