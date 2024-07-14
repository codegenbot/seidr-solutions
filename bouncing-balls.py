def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height

    num_bounces = int(input())

    total_distance = 0
    current_height = start_height

    for _ in range(num_bounces):
        distance = abs(current_height - start_height)
        total_distance += 2 * distance
        current_height = (current_height + start_height) / bounciness_index

    print(bounciness_index)
    print(total_distance)


bouncing_balls()