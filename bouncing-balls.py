def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (2**bounces) * bounciness_index

    print("{:.3f}".format(total_distance))


bouncing_balls()