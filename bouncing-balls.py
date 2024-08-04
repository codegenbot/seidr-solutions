def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = (2 ** (num_bounces - 1)) * (
        (bounciness_index - 1) / (1 + bounciness_index)
    )
    print("{:.3f}".format(total_distance))


bouncing_balls()