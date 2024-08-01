def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0.5 * (start_height + first_bounce_height) * ((1 + bounciness_index)**2 - 1)
    for _ in range(num_bounces-1):
        total_distance += 0.5 * ((1 + bounciness_index)**(2*_+3) - (1 + bounciness_index)**(2_*+2))

    print(f"{total_distance:.4f}")

bouncing_balls()