def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = 2 * first_bounce_height / start_height

    total_distance = 0

    for i in range(num_bounces):
        if start_height > 0:
            distance = 2 * abs(start_height - start_height*(1-bounciness_index))
            total_distance += distance
        start_height *= bounciness_index  # update height for the next bounce

    print(total_distance)