def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())
    total_distance = 0
    height = start_height  # Use this as the starting point for each bounce calculation
    for _ in range(num_bounces):
        total_distance += 2 * (height - ((1 + bounciness_index) ** 0.5 - 1))
        height *= 1 + bounciness_index
    print(total_distance)


bouncing_balls()