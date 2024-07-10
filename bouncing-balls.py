def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())
    
    total_distance = 0
    for _ in range(num_bounces):
        start_height = start_height * bounciness_index
        distance = (start_height + start_height) * 2
        total_distance += distance
    
    return str(int(total_distance))