def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    distance_per_bounce = start_height * bounciness_index
    total_distance = sum([distance_per_bounce] + [(2*distance_per_bounce) for _ in range(num_bounces)])

    print(total_distance)

bouncing_balls()