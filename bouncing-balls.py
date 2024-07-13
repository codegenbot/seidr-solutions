def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (first_bounce_height / start_height) ** 0.5
    total_distance = 0
    current_height = start_height

    for _ in range(num_bounces):
        new_height = (start_height * ((1 - ((abs(current_height - first_bounce_height) / start_height)) ** 2)))
        total_distance += abs(new_height - start_height)
        current_height = new_height

    print(total_distance)
    print(bounciness_index)