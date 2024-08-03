def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = (2**0.5) * ((start_height + first_bounce_height) ** 1.5)
    total_distance *= bounciness_index**bounces

    print(total_distance)


bouncing_balls()