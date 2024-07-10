def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = (first_bounce_height / start_height)
    
    num_bounces = int(input())
    
    total_distance = 0
    prev_start_height = start_height
    
    for _ in range(num_bounces):
        distance = prev_start_height - start_height
        total_distance += distance
        prev_start_height = start_height
        start_height *= 2
    
    return str(int(total_distance))