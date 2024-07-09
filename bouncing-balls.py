def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())

    total_distance = 2 * abs(first_bounce_height)  # initial drop and bounce
    current_height = first_bounce_height

    for _ in range(num_bounces):
        if current_height > 0:
            total_distance += 2 * abs(current_height)
            current_height *= bounciness_index
        else:
            break

    while current_height > 0:  # continue bouncing until we hit the ground
        total_distance += 2 * abs(current_height)
        current_height *= bounciness_index

    print(total_distance)