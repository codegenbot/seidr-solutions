def bouncing_balls():
    s_height = float(input())
    first_bounce = float(input())
    bounciness_index = first_bounce / s_height
    num_bounces = int(input())

    total_distance = 0.5 * (2**num_bounces - 1) * s_height * (1 + bounciness_index)

    print(total_distance)


bouncing_balls()