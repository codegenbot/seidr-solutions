def bouncing_balls():
    start_height = float(input())
    height_after_first_bounce = float(input())
    num_bounces = int(input())

    bounciness_index = height_after_first_bounce / start_height

    total_distance = (2**num_bounces - 1) * bounciness_index
    print(round(total_distance, 4))


bouncing_balls()