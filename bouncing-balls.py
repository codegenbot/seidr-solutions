def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (first_bounce_height / start_height) ** 0.5
    total_distance = 0
    current_height = start_height

    for _ in range(num_bounces):
        new_height = current_height * (1 - bounciness_index ** 2)
        distance = abs(current_height - new_height)
        total_distance += distance
        current_height = new_height
    print(total_distance)
    print(bounciness_index)