def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = start_height

    for _ in range(num_bounces):  
        new_height_after_bounce = 0.5 * height + 0.5 * (height / bounciness_index)
        total_distance += 2 * height + 2 * new_height_after_bounce
        if height > 0:  
            height = new_height_after_bounce

    return str(total_distance)