def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())
    
    total_distance = 0
    for _ in range(num_bounces):
        total_distance += (start_height + first_bounce_height) * 2
        first_bounce_height *= bounciness_index
        start_height *= bounciness_index
    
    return str(int(total_distance))