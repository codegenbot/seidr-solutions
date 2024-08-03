def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / starting_height
    total_distance = (1 + 2**0.5) * (
        starting_height * (1 - bounciness_index ** (-num_bounces))
    )

    print("{:.3f}".format(total_distance))


bouncing_balls()