def calculate_bouncing_distance():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (2**num_bounces) - 1

    print(bounciness_index)
    print(total_distance)


calculate_bouncing_distance()