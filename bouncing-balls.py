def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())
    bounciness_index = (first_bounce_height / start_height) ** num_bounces
    distance = (
        2 * (1 - (start_height / first_bounce_height)) * num_bounces * start_height
    )
    print(bounciness_index)
    print(distance)


bouncing_balls()