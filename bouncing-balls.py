def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = 1 - (first_bounce_height / start_height)

    total_distance = 0
    current_height = start_height
    for i in range(num_bounces):
        distance = 2 * (current_height + current_height)
        total_distance += distance
        current_height *= bounciness_index
    
    print(total_distance)