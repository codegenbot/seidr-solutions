def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = sum(2 * bounciness_index for _ in range(num_bounces))

    print(total_distance)

bouncing_balls()