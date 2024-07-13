def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 2 * (start_height + first_bounce_height)
    current_height = start_height

    for _ in range(num_bounces - 1):
        total_distance += 2 * abs(current_height)
        current_height *= bounciness_index

    print(total_distance)
    print(bounciness_index)


bouncing_balls()