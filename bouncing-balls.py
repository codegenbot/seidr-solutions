def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (
        (2**num_bounces) * start_height * ((1 + bounciness_index) ** num_bounces - 1)
    )

    print(format(total_distance, ".4f"))


bouncing_balls()