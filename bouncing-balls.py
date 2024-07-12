def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    distance_per_bounce = 2 * first_bounce_height
    total_distance = (num_bounces) * distance_per_bounce

    print(total_distance)


bouncing_balls()