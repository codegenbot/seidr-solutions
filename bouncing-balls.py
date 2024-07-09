def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (first_bounce_height / start_height)**0.5
    total_distance = 0

    for _ in range(num_bounces):
        start_height *= bounciness_index**2
        total_distance += start_height * (1 + bounciness_index)

    print(format(total_distance, ".4f"))

bouncing_balls()