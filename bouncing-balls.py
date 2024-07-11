def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = num_bounces * 2 * (start_height + first_bounce_height)

    print(total_distance)