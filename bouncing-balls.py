def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (first_bounce_height / start_height) ** num_bounces
    total_distance = 2 * (1 - (start_height / first_bounce_height)) * bounciness_index

    print("{:.3f}".format(total_distance))


bouncing_balls()