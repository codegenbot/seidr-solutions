def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += bounciness_index

    print(bounciness_index)
    print(
        total_distance + 1
    )  # add 1 because the ball travels an extra distance after the last bounce


bouncing_balls()