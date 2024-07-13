def calculate_total_distance():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = start_height
    for _ in range(num_bounces):
        total_distance += 2 * (height + first_bounce_height)
        height *= bounciness_index

    print(bounciness_index)
    print(total_distance)


calculate_total_distance()