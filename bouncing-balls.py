def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = (2**0.5) * (
        (start_height + first_bounce_height) * bounciness_index**num_bounces
        - start_height
    )

    print(format(total_distance, ".4f"))


bouncing_balls()