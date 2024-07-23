def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = start_height

    for _ in range(num_bounces):  
        total_distance += 2 * start_height + 2 * (start_height / bounciness_index)
        if height > 1:  
            height *= bounciness_index

    return str(total_distance)