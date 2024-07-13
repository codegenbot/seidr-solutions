def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())
    total_distance = 0
    height = first_bounce_height
    for _ in range(num_bounces):
        total_distance += (
            2
            * starting_height
            * math.pow(bounciness_index, _)
            / (1 + bounciness_index**2)
        )
        height *= bounciness_index**2
    print("%.3f" % total_distance)


bouncing_balls()