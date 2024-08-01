def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (2**0.5) * ((bounciness_index + 1) ** (bounces + 1) - 1)

    print(f"{total_distance:.6f}")


bouncing_balls()