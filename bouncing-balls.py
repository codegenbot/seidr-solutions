def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())

    total_distance = 0.5 * (1 + bounciness_index) ** num_bounces

    print(f"{total_distance:.4f}")


bouncing_balls()