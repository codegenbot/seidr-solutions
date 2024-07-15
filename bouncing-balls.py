def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for i in range(num_bounces):
        if start_height > 0 and first_bounce_height > 0:
            total_distance += 2 * abs(start_height - first_bounce_height)
        start_height = first_bounce_height
        first_bounce_height *= (1 - bounciness_index)

    print(total_distance)


bouncing_balls()