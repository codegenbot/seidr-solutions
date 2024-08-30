def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / starting_height

    total_distance = (1 + 2**0.5) ** num_bounces
    total_distance *= bounciness_index
    total_distance = round(total_distance, 6)

    print(f"{total_distance:.6f}")


bouncing_balls()