def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    current_height = start_height
    for _ in range(num_bounces):
        total_distance += abs(current_height - first_bounce_height)
        current_height *= bounciness_index

    print(total_distance + abs(start_height - first_bounce_height))


bouncing_balls()