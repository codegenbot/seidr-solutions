def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (first_bounce_height / start_height) ** 0.5
    total_distance = 2 * abs(start_height - first_bounce_height)
    current_height = start_height

    for _ in range(num_bounces):
        current_height *= bounciness_index
        total_distance += 4 * abs(current_height - start_height)
    print(total_distance)
    print(bounciness_index)


bouncing_balls()