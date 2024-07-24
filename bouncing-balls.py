def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())

    total_distance = (1 + 2 * bounciness_index) ** num_bounces - 1
    print(total_distance)


bouncing_balls()