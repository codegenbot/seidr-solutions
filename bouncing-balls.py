def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = (2 * first_bounce_height) / start_height
    num_bounces = int(input())
    total_distance = 0
    current_height = start_height
    for _ in range(num_bounces):
        total_distance += current_height
        current_height *= (2 - bounciness_index)
    print(total_distance)

bouncing_balls()