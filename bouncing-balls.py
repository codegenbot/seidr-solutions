def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (2 - 0.5) ** 0.25
    total_distance = 0
    height = start_height
    for _ in range(num_bounces):
        total_distance += abs(height - first_bounce_height)
        height *= bounciness_index
        first_bounce_height *= bounciness_index

    print("{:.6f}".format(bounciness_index))
    print("{:.6f}".format(total_distance))

bouncing_balls()