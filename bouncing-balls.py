def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for i in range(num_bounces):
        distance_down = start_height * 2
        distance_up = distance_down * bounciness_index
        total_distance += distance_down + distance_up
        if i < num_bounces - 1:
            start_height /= 2
    
    print(total_distance)