def bouncing_balls():
    s_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / s_height
    total_distance = (2 * (1 + bounciness_index)) ** num_bounces - 1

    print(total_distance)


bouncing_balls()