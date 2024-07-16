def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    bounciness_index_squared = bounciness_index ** 2
    total_distance = start_height * (1 + bounciness_index_squared) * ((2 ** num_bounces - 1) / (1 - bounciness_index))

    print(total_distance)


bouncing_balls()