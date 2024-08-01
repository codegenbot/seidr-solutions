def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / starting_height

    total_distance = (2**num_bounces) - 1
    total_distance *= bounciness_index * starting_height

    print(format(total_distance, ".4f"))


bouncing_balls()