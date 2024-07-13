def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (first_bounce_height / start_height) ** 0.5

    total_distance = 0
    current_height = start_height

    for _ in range(num_bounces):
        distance_up = abs(current_height - first_bounce_height)
        distance_down = abs(first_bounce_height - start_height)

        total_distance += distance_up + distance_down

        current_height *= 1 - (current_height / start_height) ** 2

    print(total_distance)
    print(bounciness_index)