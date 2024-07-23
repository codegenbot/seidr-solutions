def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = start_height

    for _ in range(num_bounces):
        distance_per_bounce = 2 * height
        total_distance += distance_per_bounce
        height *= bounciness_index

    total_distance *= 2  
    return round(total_distance, 4)


print(bouncing_balls())