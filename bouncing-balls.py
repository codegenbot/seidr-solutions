def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (
        (2**0.5)
        * ((1 + bounciness_index) ** (bounces + 1) - 1)
        / (1 + bounciness_index)
    )

    print(format(total_distance, ".4f"))


bouncing_balls()