def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 2 * start_height + 2 * first_bounce_height
    current_height = first_bounce_height

    for _ in range(num_bounces - 1):
        total_distance += 2 * current_height
        current_height *= 1 - bounciness_index  # decay the height after each bounce

    print(total_distance)