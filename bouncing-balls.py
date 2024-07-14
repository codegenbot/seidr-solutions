def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (
        (1 + 2)
        * (start_height**2)
        * ((bounciness_index - 1) / (bounciness_index + 1)) ** num_bounces
    )

    print(total_distance)


bouncing_balls()